#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "vm/CachedCCWBase.h"
#include "utils/New.h"


struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
struct KeyCollection_t2A4B1E0C0E3FF52F044CC9562DC59AD3218A3E26;
struct KeyCollection_t851423C7344032A1F54545C69FC6507778294D6C;
struct KeyCollection_tA868B272565783BB47AFEBE2D972E4580D89FFDD;
struct KeyCollection_t26EB59725A9028952AE8A92E910317CDE2ADBE1A;
struct KeyCollection_t26620BB43BDAA24882C5B5AE5EBF46C2362108F7;
struct KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03;
struct KeyCollection_tDA310B7DC9CAFA53DA33CE00320B8FDEC25A202A;
struct ValueCollection_t771E6C8172A73A92131A83B416DB2940A1960969;
struct ValueCollection_t6CD4B9552B29D570FBA4E0145D0C98841ECCC8C1;
struct ValueCollection_t3F574F38B6AE121FF3876DD8E64A431C07864452;
struct ValueCollection_tC2DED3EFB126F141FE038E1851EF61371995393C;
struct ValueCollection_t3B80A05F6877E79B4863617CC348739144DAA5FF;
struct ValueCollection_tCE6BD704B9571C131E2D8C8CED569DDEC4AE042B;
struct ValueCollection_t1FF21E697406C561A5E8C583DDB907C29D9B5307;
struct EntryU5BU5D_t276E709F7EC8B1E405D24CC23CD7E090D8888C5D;
struct EntryU5BU5D_tAEFE165DEE6FDB9F2B657E11D15B8C95DD88B0C2;
struct EntryU5BU5D_t3946221721BFD8AAB4A23128659509E830AA53CE;
struct EntryU5BU5D_t663D481AFCBA7CFEBD8228A93D9F1EABDADBFA54;
struct EntryU5BU5D_t1FFC76DF84085A121D954553967595F76F27B3C3;
struct EntryU5BU5D_tEA0133B78B9FF7045128C508FA50247E525A94D6;
struct EntryU5BU5D_t22D15A9D0B0909C7952CB207306B314254CA7D66;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;

struct IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F;
struct IIterator_1_t5D94F8F6DA7939B44A0CAEA2C529E138E9519A83;
struct IMapView_2_tB05BAD917B93C65C4A083D0CADDF491940EF405E;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct NOVTABLE IIterable_1_tD7A745AD06B0128FC5B51D1EDAA85FCAF30862F7 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mAC91EAD26F468739CF8F0AA32369B0CC1D4D5C5F(IIterator_1_t5D94F8F6DA7939B44A0CAEA2C529E138E9519A83** comReturnValue) = 0;
};
struct NOVTABLE IMapView_2_tB05BAD917B93C65C4A083D0CADDF491940EF405E : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_mAAA2DF16506149CF767AAAAB02F91481B50CF13F(Il2CppHString ___0_key, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m434DE32DEFE167CE9916157FA798AD795DAB77B5(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_mFC16CB8EC0BF8CA462A9EE437BA856AB4D1FFEF4(Il2CppHString ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m31B88A6ED0E09680DB76F7AA1E9416F163962D39(IMapView_2_tB05BAD917B93C65C4A083D0CADDF491940EF405E** ___0_first, IMapView_2_tB05BAD917B93C65C4A083D0CADDF491940EF405E** ___1_second) = 0;
};
struct NOVTABLE IMap_2_tAE2228A4416377F86FE3EDAD3A1AED7DBA941870 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m4C9AD01AA15983B4F0446FFBAD393758D4A32BF7(Il2CppHString ___0_key, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_mF4906D2C3D81C54F7911DCDE4D8B529E1F88981C(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_mDA58296E6F4EE01787D9FFC6C636662D2069E42E(Il2CppHString ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m669681064D2AC300F765F6DF07C81423840A20BD(IMapView_2_tB05BAD917B93C65C4A083D0CADDF491940EF405E** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m7ABDA9523E42625EECDCA4599B44B517BDE81AB0(Il2CppHString ___0_key, int32_t ___1_value, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_mCFC5A2C846F5E45D9AEDD44C0F0E641F3D24FD72(Il2CppHString ___0_key) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m14CD9DACEE0BD71AF51C2D65AAE94CA06A83AB6F() = 0;
};
struct NOVTABLE IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) = 0;
};
struct Dictionary_2_t1C37B32C44ABA8083F0881482047F27060D6A90F  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t276E709F7EC8B1E405D24CC23CD7E090D8888C5D* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t2A4B1E0C0E3FF52F044CC9562DC59AD3218A3E26* ____keys;
	ValueCollection_t771E6C8172A73A92131A83B416DB2940A1960969* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tAEFE165DEE6FDB9F2B657E11D15B8C95DD88B0C2* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t851423C7344032A1F54545C69FC6507778294D6C* ____keys;
	ValueCollection_t6CD4B9552B29D570FBA4E0145D0C98841ECCC8C1* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t40AB3B8A7588B005B08959DED5F66D1849D76246  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t3946221721BFD8AAB4A23128659509E830AA53CE* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tA868B272565783BB47AFEBE2D972E4580D89FFDD* ____keys;
	ValueCollection_t3F574F38B6AE121FF3876DD8E64A431C07864452* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tD5821F79A9F4A55C77E32E7E342865AABBA2AF5D  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t663D481AFCBA7CFEBD8228A93D9F1EABDADBFA54* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t26EB59725A9028952AE8A92E910317CDE2ADBE1A* ____keys;
	ValueCollection_tC2DED3EFB126F141FE038E1851EF61371995393C* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tFA0E7CD5951B83DD87A65E89D971A68E538F9470  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t1FFC76DF84085A121D954553967595F76F27B3C3* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t26620BB43BDAA24882C5B5AE5EBF46C2362108F7* ____keys;
	ValueCollection_t3B80A05F6877E79B4863617CC348739144DAA5FF* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tEA0133B78B9FF7045128C508FA50247E525A94D6* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03* ____keys;
	ValueCollection_tCE6BD704B9571C131E2D8C8CED569DDEC4AE042B* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t46198BF25BCCD54701A31C956FA3324EFD3B5959  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t22D15A9D0B0909C7952CB207306B314254CA7D66* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tDA310B7DC9CAFA53DA33CE00320B8FDEC25A202A* ____keys;
	ValueCollection_t1FF21E697406C561A5E8C583DDB907C29D9B5307* ____values;
	RuntimeObject* ____syncRoot;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue);
il2cpp_hresult_t IMap_2_Lookup_m4C9AD01AA15983B4F0446FFBAD393758D4A32BF7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___0_key, int32_t* comReturnValue);
il2cpp_hresult_t IMap_2_get_Size_mF4906D2C3D81C54F7911DCDE4D8B529E1F88981C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMap_2_HasKey_mDA58296E6F4EE01787D9FFC6C636662D2069E42E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMap_2_GetView_m669681064D2AC300F765F6DF07C81423840A20BD_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tB05BAD917B93C65C4A083D0CADDF491940EF405E** comReturnValue);
il2cpp_hresult_t IMap_2_Insert_m7ABDA9523E42625EECDCA4599B44B517BDE81AB0_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___0_key, int32_t ___1_value, bool* comReturnValue);
il2cpp_hresult_t IMap_2_Remove_mCFC5A2C846F5E45D9AEDD44C0F0E641F3D24FD72_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___0_key);
il2cpp_hresult_t IMap_2_Clear_m14CD9DACEE0BD71AF51C2D65AAE94CA06A83AB6F_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_mAC91EAD26F468739CF8F0AA32369B0CC1D4D5C5F_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t5D94F8F6DA7939B44A0CAEA2C529E138E9519A83** comReturnValue);
il2cpp_hresult_t IMapView_2_Lookup_mAAA2DF16506149CF767AAAAB02F91481B50CF13F_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___0_key, int32_t* comReturnValue);
il2cpp_hresult_t IMapView_2_get_Size_m434DE32DEFE167CE9916157FA798AD795DAB77B5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMapView_2_HasKey_mFC16CB8EC0BF8CA462A9EE437BA856AB4D1FFEF4_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMapView_2_Split_m31B88A6ED0E09680DB76F7AA1E9416F163962D39_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tB05BAD917B93C65C4A083D0CADDF491940EF405E** ___0_first, IMapView_2_tB05BAD917B93C65C4A083D0CADDF491940EF405E** ___1_second);



struct Dictionary_2_t1C37B32C44ABA8083F0881482047F27060D6A90F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t1C37B32C44ABA8083F0881482047F27060D6A90F_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t1C37B32C44ABA8083F0881482047F27060D6A90F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t1C37B32C44ABA8083F0881482047F27060D6A90F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t1C37B32C44ABA8083F0881482047F27060D6A90F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t1C37B32C44ABA8083F0881482047F27060D6A90F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t1C37B32C44ABA8083F0881482047F27060D6A90F_ComCallableWrapper(obj));
}

struct Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F_ComCallableWrapper(obj));
}

struct Dictionary_2_t40AB3B8A7588B005B08959DED5F66D1849D76246_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t40AB3B8A7588B005B08959DED5F66D1849D76246_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t40AB3B8A7588B005B08959DED5F66D1849D76246_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t40AB3B8A7588B005B08959DED5F66D1849D76246_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t40AB3B8A7588B005B08959DED5F66D1849D76246(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t40AB3B8A7588B005B08959DED5F66D1849D76246_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t40AB3B8A7588B005B08959DED5F66D1849D76246_ComCallableWrapper(obj));
}

struct Dictionary_2_tD5821F79A9F4A55C77E32E7E342865AABBA2AF5D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tD5821F79A9F4A55C77E32E7E342865AABBA2AF5D_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tD5821F79A9F4A55C77E32E7E342865AABBA2AF5D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tD5821F79A9F4A55C77E32E7E342865AABBA2AF5D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tD5821F79A9F4A55C77E32E7E342865AABBA2AF5D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tD5821F79A9F4A55C77E32E7E342865AABBA2AF5D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tD5821F79A9F4A55C77E32E7E342865AABBA2AF5D_ComCallableWrapper(obj));
}

struct Dictionary_2_tFA0E7CD5951B83DD87A65E89D971A68E538F9470_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tFA0E7CD5951B83DD87A65E89D971A68E538F9470_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tFA0E7CD5951B83DD87A65E89D971A68E538F9470_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tFA0E7CD5951B83DD87A65E89D971A68E538F9470_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tFA0E7CD5951B83DD87A65E89D971A68E538F9470(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tFA0E7CD5951B83DD87A65E89D971A68E538F9470_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tFA0E7CD5951B83DD87A65E89D971A68E538F9470_ComCallableWrapper(obj));
}

struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_ComCallableWrapper>, IMap_2_tAE2228A4416377F86FE3EDAD3A1AED7DBA941870, IIterable_1_tD7A745AD06B0128FC5B51D1EDAA85FCAF30862F7, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IMapView_2_tB05BAD917B93C65C4A083D0CADDF491940EF405E
{
	inline Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMap_2_tAE2228A4416377F86FE3EDAD3A1AED7DBA941870::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMap_2_tAE2228A4416377F86FE3EDAD3A1AED7DBA941870*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tD7A745AD06B0128FC5B51D1EDAA85FCAF30862F7::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tD7A745AD06B0128FC5B51D1EDAA85FCAF30862F7*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMapView_2_tB05BAD917B93C65C4A083D0CADDF491940EF405E::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMapView_2_tB05BAD917B93C65C4A083D0CADDF491940EF405E*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IMap_2_tAE2228A4416377F86FE3EDAD3A1AED7DBA941870::IID;
		interfaceIds[1] = IIterable_1_tD7A745AD06B0128FC5B51D1EDAA85FCAF30862F7::IID;
		interfaceIds[2] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[3] = IMapView_2_tB05BAD917B93C65C4A083D0CADDF491940EF405E::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m4C9AD01AA15983B4F0446FFBAD393758D4A32BF7(Il2CppHString ___0_key, int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Lookup_m4C9AD01AA15983B4F0446FFBAD393758D4A32BF7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_mF4906D2C3D81C54F7911DCDE4D8B529E1F88981C(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_get_Size_mF4906D2C3D81C54F7911DCDE4D8B529E1F88981C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_mDA58296E6F4EE01787D9FFC6C636662D2069E42E(Il2CppHString ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_HasKey_mDA58296E6F4EE01787D9FFC6C636662D2069E42E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m669681064D2AC300F765F6DF07C81423840A20BD(IMapView_2_tB05BAD917B93C65C4A083D0CADDF491940EF405E** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_GetView_m669681064D2AC300F765F6DF07C81423840A20BD_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m7ABDA9523E42625EECDCA4599B44B517BDE81AB0(Il2CppHString ___0_key, int32_t ___1_value, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Insert_m7ABDA9523E42625EECDCA4599B44B517BDE81AB0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, ___1_value, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_mCFC5A2C846F5E45D9AEDD44C0F0E641F3D24FD72(Il2CppHString ___0_key) IL2CPP_OVERRIDE
	{
		return IMap_2_Remove_mCFC5A2C846F5E45D9AEDD44C0F0E641F3D24FD72_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m14CD9DACEE0BD71AF51C2D65AAE94CA06A83AB6F() IL2CPP_OVERRIDE
	{
		return IMap_2_Clear_m14CD9DACEE0BD71AF51C2D65AAE94CA06A83AB6F_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mAC91EAD26F468739CF8F0AA32369B0CC1D4D5C5F(IIterator_1_t5D94F8F6DA7939B44A0CAEA2C529E138E9519A83** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mAC91EAD26F468739CF8F0AA32369B0CC1D4D5C5F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_mAAA2DF16506149CF767AAAAB02F91481B50CF13F(Il2CppHString ___0_key, int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_Lookup_mAAA2DF16506149CF767AAAAB02F91481B50CF13F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m434DE32DEFE167CE9916157FA798AD795DAB77B5(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_get_Size_m434DE32DEFE167CE9916157FA798AD795DAB77B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_mFC16CB8EC0BF8CA462A9EE437BA856AB4D1FFEF4(Il2CppHString ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_HasKey_mFC16CB8EC0BF8CA462A9EE437BA856AB4D1FFEF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m31B88A6ED0E09680DB76F7AA1E9416F163962D39(IMapView_2_tB05BAD917B93C65C4A083D0CADDF491940EF405E** ___0_first, IMapView_2_tB05BAD917B93C65C4A083D0CADDF491940EF405E** ___1_second) IL2CPP_OVERRIDE
	{
		return IMapView_2_Split_m31B88A6ED0E09680DB76F7AA1E9416F163962D39_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_first, ___1_second);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_ComCallableWrapper(obj));
}

struct Dictionary_2_t46198BF25BCCD54701A31C956FA3324EFD3B5959_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t46198BF25BCCD54701A31C956FA3324EFD3B5959_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t46198BF25BCCD54701A31C956FA3324EFD3B5959_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t46198BF25BCCD54701A31C956FA3324EFD3B5959_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t46198BF25BCCD54701A31C956FA3324EFD3B5959(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t46198BF25BCCD54701A31C956FA3324EFD3B5959_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t46198BF25BCCD54701A31C956FA3324EFD3B5959_ComCallableWrapper(obj));
}
