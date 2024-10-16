// Copyright (c) Mixed Reality Toolkit Contributors
// Licensed under the BSD 3-Clause

using System;
using UnityEngine;
using UnityEngine.XR;

namespace MixedReality.Toolkit.Input
{
    /// <summary>
    /// A pose source which tries to obtain the pinch pose from a hand specified by the <see cref="HandBasedPoseSource.Hand"/> property.
    /// </summary>
    [Serializable]
    public class PinchPoseSource : HandBasedPoseSource
    {
        /// <summary>
        /// Tries to get the pinch pose of a specific hand.
        /// </summary>
        public override bool TryGetPose(out Pose pose)
        {
            XRNode? handNode = Hand.ToXRNode();
            if (handNode.HasValue
                && XRSubsystemHelpers.HandsAggregator != null
                && XRSubsystemHelpers.HandsAggregator.TryGetPinchingPoint(handNode.Value, out HandJointPose pinchPose))
            {
                Vector3 cameraPosition = Camera.main.transform.position;
                Quaternion cameraRotation = Camera.main.transform.rotation;

                Vector3 localPosition = Camera.main.transform.InverseTransformPoint(pinchPose.Position);

                pose.position = localPosition;
                pose.rotation = pinchPose.Rotation;
                return true;
            }

            pose = Pose.identity;
            return false;
        }
    }
}
