#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "vm/CachedCCWBase.h"
#include "utils/New.h"


struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
struct IEqualityComparer_1_t3950A1C72D0704C9A5D08F255CB6BE1525EDC4A9;
struct KeyCollection_tD48285ECDF8438053DB851543CC44255F2A00427;
struct KeyCollection_t8155644C2AFB1DBC821FF6C6368D2C87CD7D91BE;
struct KeyCollection_t489E309F3D8D1527EED768113722A15B49454DEE;
struct KeyCollection_tF759573176BBAED036A214CEA429B149E9F6D744;
struct KeyCollection_tC533E8BAE940E1D8599793FF3969C20FE938AC1C;
struct KeyCollection_tAF264A2883102D1BFA0D1C83577AC69AAFAFB0D1;
struct KeyCollection_t25E8F5C2BE6984D11B4C4C55D28EA354454B3DF1;
struct ValueCollection_t079BA517239F1ED58868F9BD46ABC9A2F394F786;
struct ValueCollection_tF6BDA5C796A886A30A3FD9F1D9A568F23C3B27A5;
struct ValueCollection_t7A9C5DDBA0C4C400091D8E2545331E0D019EDC51;
struct ValueCollection_tD5EF36D68F13438B89570428949A40F358B64456;
struct ValueCollection_t57CE11C20C64487E49755D0067CAEE9647101BC2;
struct ValueCollection_t40AF39838263D5C305B4AB945433EE31E5850720;
struct ValueCollection_tC1354F26C6AD9A4AFE9CBEF8F67E21E28DFDC01C;
struct EntryU5BU5D_t04AD6FAE3CE2700B8AADB199AD0C89040902EB90;
struct EntryU5BU5D_tF40DC51FD05798833805D88391B0AEB1C54252A8;
struct EntryU5BU5D_t482B8BF6CB1E67267C93BA600051FEE169698310;
struct EntryU5BU5D_tEED0BB4144E2C359BC0DF42F4CF282FABA950202;
struct EntryU5BU5D_tC290BD88003566770281A880912B6B92FC7E34CF;
struct EntryU5BU5D_t3EB9CC5B0B8FA7C29850A272124C92EB1B4327CE;
struct EntryU5BU5D_tD0A7631886A52E684BFBF5B39D345400279E5095;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;

struct IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F;
struct IIterator_1_t44BC199DFC71CD4A78BD59233F65887E7C5DDBD5;
struct IMapView_2_tE8DC823D185B2AA620F7E44422525F2678EF7E51;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct NOVTABLE IIterable_1_t0B53E481B04981BABC93B056CF8769F29A1F4FA7 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mEB35703A36257E82195D448298E7DCC735F6F1F5(IIterator_1_t44BC199DFC71CD4A78BD59233F65887E7C5DDBD5** comReturnValue) = 0;
};
struct NOVTABLE IMapView_2_tE8DC823D185B2AA620F7E44422525F2678EF7E51 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m0ABAAE6CC0A9458875883C650E71E1CA68B2A4D9(Il2CppIInspectable* ___0_key, Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m111ADFB35168DD5FC81B0F62D8F36B200D0574C5(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m58B342ADBA1748A7EA3F18F128C47020024C4F6B(Il2CppIInspectable* ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m9C9BD300552908CAE48563F57EE0F47375C85774(IMapView_2_tE8DC823D185B2AA620F7E44422525F2678EF7E51** ___0_first, IMapView_2_tE8DC823D185B2AA620F7E44422525F2678EF7E51** ___1_second) = 0;
};
struct NOVTABLE IMap_2_t8869642418D3C771117303D3BB9B1DF9B6358F38 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m1DB4242F349F69622C9CEA4453FF81F8C23EFDDE(Il2CppIInspectable* ___0_key, Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_mAABA73C2EF165AD1A8E3E9D1FCE7364FD3BFAEB7(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_mD6EC1EE3581E793049E316D2E1594EBA6EEC4B48(Il2CppIInspectable* ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_mB8CB3A02EE39945755D0385D6703A553E9212C71(IMapView_2_tE8DC823D185B2AA620F7E44422525F2678EF7E51** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m2C25B85386C812A9B30EE58549DCD9898F58C713(Il2CppIInspectable* ___0_key, Il2CppHString ___1_value, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_mE4C757DE83A74FBB8D635197D88F63737D425DA8(Il2CppIInspectable* ___0_key) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m8C9283500F57CF4B2C185C135512AB3BD47E1CFC() = 0;
};
struct NOVTABLE IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) = 0;
};
struct Dictionary_2_tB0D346953106A20DD058F31647E9F410A0978522  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t04AD6FAE3CE2700B8AADB199AD0C89040902EB90* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tD48285ECDF8438053DB851543CC44255F2A00427* ____keys;
	ValueCollection_t079BA517239F1ED58868F9BD46ABC9A2F394F786* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tB5CB9488A3978B3AB90F59900B856EBBC71BA129  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tF40DC51FD05798833805D88391B0AEB1C54252A8* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t8155644C2AFB1DBC821FF6C6368D2C87CD7D91BE* ____keys;
	ValueCollection_tF6BDA5C796A886A30A3FD9F1D9A568F23C3B27A5* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t184255DB06D490EE1D1E0AC3AB6196B56751FC75  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t482B8BF6CB1E67267C93BA600051FEE169698310* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t489E309F3D8D1527EED768113722A15B49454DEE* ____keys;
	ValueCollection_t7A9C5DDBA0C4C400091D8E2545331E0D019EDC51* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tDC24C472D18C1A4B48E5F32DE9DD41C5BB72A1D4  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tEED0BB4144E2C359BC0DF42F4CF282FABA950202* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tF759573176BBAED036A214CEA429B149E9F6D744* ____keys;
	ValueCollection_tD5EF36D68F13438B89570428949A40F358B64456* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tBB429CD29D6F765D173E93E0F638CBF47BCE9A69  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tC290BD88003566770281A880912B6B92FC7E34CF* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tC533E8BAE940E1D8599793FF3969C20FE938AC1C* ____keys;
	ValueCollection_t57CE11C20C64487E49755D0067CAEE9647101BC2* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t3EB9CC5B0B8FA7C29850A272124C92EB1B4327CE* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tAF264A2883102D1BFA0D1C83577AC69AAFAFB0D1* ____keys;
	ValueCollection_t40AF39838263D5C305B4AB945433EE31E5850720* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t56FCAC2E0ACE5ADEFBBB719FBF3FD27FF7196AD8  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tD0A7631886A52E684BFBF5B39D345400279E5095* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t25E8F5C2BE6984D11B4C4C55D28EA354454B3DF1* ____keys;
	ValueCollection_tC1354F26C6AD9A4AFE9CBEF8F67E21E28DFDC01C* ____values;
	RuntimeObject* ____syncRoot;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IMap_2_Lookup_m1DB4242F349F69622C9CEA4453FF81F8C23EFDDE_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___0_key, Il2CppHString* comReturnValue);
il2cpp_hresult_t IMap_2_get_Size_mAABA73C2EF165AD1A8E3E9D1FCE7364FD3BFAEB7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMap_2_HasKey_mD6EC1EE3581E793049E316D2E1594EBA6EEC4B48_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMap_2_GetView_mB8CB3A02EE39945755D0385D6703A553E9212C71_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tE8DC823D185B2AA620F7E44422525F2678EF7E51** comReturnValue);
il2cpp_hresult_t IMap_2_Insert_m2C25B85386C812A9B30EE58549DCD9898F58C713_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___0_key, Il2CppHString ___1_value, bool* comReturnValue);
il2cpp_hresult_t IMap_2_Remove_mE4C757DE83A74FBB8D635197D88F63737D425DA8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___0_key);
il2cpp_hresult_t IMap_2_Clear_m8C9283500F57CF4B2C185C135512AB3BD47E1CFC_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_mEB35703A36257E82195D448298E7DCC735F6F1F5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t44BC199DFC71CD4A78BD59233F65887E7C5DDBD5** comReturnValue);
il2cpp_hresult_t IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue);
il2cpp_hresult_t IMapView_2_Lookup_m0ABAAE6CC0A9458875883C650E71E1CA68B2A4D9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___0_key, Il2CppHString* comReturnValue);
il2cpp_hresult_t IMapView_2_get_Size_m111ADFB35168DD5FC81B0F62D8F36B200D0574C5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMapView_2_HasKey_m58B342ADBA1748A7EA3F18F128C47020024C4F6B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMapView_2_Split_m9C9BD300552908CAE48563F57EE0F47375C85774_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tE8DC823D185B2AA620F7E44422525F2678EF7E51** ___0_first, IMapView_2_tE8DC823D185B2AA620F7E44422525F2678EF7E51** ___1_second);



struct Dictionary_2_tB0D346953106A20DD058F31647E9F410A0978522_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tB0D346953106A20DD058F31647E9F410A0978522_ComCallableWrapper>, IMap_2_t8869642418D3C771117303D3BB9B1DF9B6358F38, IIterable_1_t0B53E481B04981BABC93B056CF8769F29A1F4FA7, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IMapView_2_tE8DC823D185B2AA620F7E44422525F2678EF7E51
{
	inline Dictionary_2_tB0D346953106A20DD058F31647E9F410A0978522_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tB0D346953106A20DD058F31647E9F410A0978522_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IMap_2_t8869642418D3C771117303D3BB9B1DF9B6358F38::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMap_2_t8869642418D3C771117303D3BB9B1DF9B6358F38*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t0B53E481B04981BABC93B056CF8769F29A1F4FA7::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t0B53E481B04981BABC93B056CF8769F29A1F4FA7*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMapView_2_tE8DC823D185B2AA620F7E44422525F2678EF7E51::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMapView_2_tE8DC823D185B2AA620F7E44422525F2678EF7E51*>(this);
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
		interfaceIds[0] = IMap_2_t8869642418D3C771117303D3BB9B1DF9B6358F38::IID;
		interfaceIds[1] = IIterable_1_t0B53E481B04981BABC93B056CF8769F29A1F4FA7::IID;
		interfaceIds[2] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[3] = IMapView_2_tE8DC823D185B2AA620F7E44422525F2678EF7E51::IID;

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

	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m1DB4242F349F69622C9CEA4453FF81F8C23EFDDE(Il2CppIInspectable* ___0_key, Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Lookup_m1DB4242F349F69622C9CEA4453FF81F8C23EFDDE_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_mAABA73C2EF165AD1A8E3E9D1FCE7364FD3BFAEB7(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_get_Size_mAABA73C2EF165AD1A8E3E9D1FCE7364FD3BFAEB7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_mD6EC1EE3581E793049E316D2E1594EBA6EEC4B48(Il2CppIInspectable* ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_HasKey_mD6EC1EE3581E793049E316D2E1594EBA6EEC4B48_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_mB8CB3A02EE39945755D0385D6703A553E9212C71(IMapView_2_tE8DC823D185B2AA620F7E44422525F2678EF7E51** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_GetView_mB8CB3A02EE39945755D0385D6703A553E9212C71_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m2C25B85386C812A9B30EE58549DCD9898F58C713(Il2CppIInspectable* ___0_key, Il2CppHString ___1_value, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Insert_m2C25B85386C812A9B30EE58549DCD9898F58C713_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, ___1_value, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_mE4C757DE83A74FBB8D635197D88F63737D425DA8(Il2CppIInspectable* ___0_key) IL2CPP_OVERRIDE
	{
		return IMap_2_Remove_mE4C757DE83A74FBB8D635197D88F63737D425DA8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m8C9283500F57CF4B2C185C135512AB3BD47E1CFC() IL2CPP_OVERRIDE
	{
		return IMap_2_Clear_m8C9283500F57CF4B2C185C135512AB3BD47E1CFC_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mEB35703A36257E82195D448298E7DCC735F6F1F5(IIterator_1_t44BC199DFC71CD4A78BD59233F65887E7C5DDBD5** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mEB35703A36257E82195D448298E7DCC735F6F1F5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m0ABAAE6CC0A9458875883C650E71E1CA68B2A4D9(Il2CppIInspectable* ___0_key, Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_Lookup_m0ABAAE6CC0A9458875883C650E71E1CA68B2A4D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m111ADFB35168DD5FC81B0F62D8F36B200D0574C5(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_get_Size_m111ADFB35168DD5FC81B0F62D8F36B200D0574C5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m58B342ADBA1748A7EA3F18F128C47020024C4F6B(Il2CppIInspectable* ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_HasKey_m58B342ADBA1748A7EA3F18F128C47020024C4F6B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m9C9BD300552908CAE48563F57EE0F47375C85774(IMapView_2_tE8DC823D185B2AA620F7E44422525F2678EF7E51** ___0_first, IMapView_2_tE8DC823D185B2AA620F7E44422525F2678EF7E51** ___1_second) IL2CPP_OVERRIDE
	{
		return IMapView_2_Split_m9C9BD300552908CAE48563F57EE0F47375C85774_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_first, ___1_second);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tB0D346953106A20DD058F31647E9F410A0978522(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tB0D346953106A20DD058F31647E9F410A0978522_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tB0D346953106A20DD058F31647E9F410A0978522_ComCallableWrapper(obj));
}

struct Dictionary_2_tB5CB9488A3978B3AB90F59900B856EBBC71BA129_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tB5CB9488A3978B3AB90F59900B856EBBC71BA129_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tB5CB9488A3978B3AB90F59900B856EBBC71BA129_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tB5CB9488A3978B3AB90F59900B856EBBC71BA129_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tB5CB9488A3978B3AB90F59900B856EBBC71BA129(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tB5CB9488A3978B3AB90F59900B856EBBC71BA129_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tB5CB9488A3978B3AB90F59900B856EBBC71BA129_ComCallableWrapper(obj));
}

struct Dictionary_2_t184255DB06D490EE1D1E0AC3AB6196B56751FC75_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t184255DB06D490EE1D1E0AC3AB6196B56751FC75_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t184255DB06D490EE1D1E0AC3AB6196B56751FC75_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t184255DB06D490EE1D1E0AC3AB6196B56751FC75_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t184255DB06D490EE1D1E0AC3AB6196B56751FC75(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t184255DB06D490EE1D1E0AC3AB6196B56751FC75_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t184255DB06D490EE1D1E0AC3AB6196B56751FC75_ComCallableWrapper(obj));
}

struct Dictionary_2_tDC24C472D18C1A4B48E5F32DE9DD41C5BB72A1D4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tDC24C472D18C1A4B48E5F32DE9DD41C5BB72A1D4_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tDC24C472D18C1A4B48E5F32DE9DD41C5BB72A1D4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tDC24C472D18C1A4B48E5F32DE9DD41C5BB72A1D4_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tDC24C472D18C1A4B48E5F32DE9DD41C5BB72A1D4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tDC24C472D18C1A4B48E5F32DE9DD41C5BB72A1D4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tDC24C472D18C1A4B48E5F32DE9DD41C5BB72A1D4_ComCallableWrapper(obj));
}

struct Dictionary_2_tBB429CD29D6F765D173E93E0F638CBF47BCE9A69_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tBB429CD29D6F765D173E93E0F638CBF47BCE9A69_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tBB429CD29D6F765D173E93E0F638CBF47BCE9A69_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tBB429CD29D6F765D173E93E0F638CBF47BCE9A69_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tBB429CD29D6F765D173E93E0F638CBF47BCE9A69(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tBB429CD29D6F765D173E93E0F638CBF47BCE9A69_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tBB429CD29D6F765D173E93E0F638CBF47BCE9A69_ComCallableWrapper(obj));
}

struct Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD_ComCallableWrapper(obj));
}

struct Dictionary_2_t56FCAC2E0ACE5ADEFBBB719FBF3FD27FF7196AD8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t56FCAC2E0ACE5ADEFBBB719FBF3FD27FF7196AD8_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t56FCAC2E0ACE5ADEFBBB719FBF3FD27FF7196AD8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t56FCAC2E0ACE5ADEFBBB719FBF3FD27FF7196AD8_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t56FCAC2E0ACE5ADEFBBB719FBF3FD27FF7196AD8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t56FCAC2E0ACE5ADEFBBB719FBF3FD27FF7196AD8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t56FCAC2E0ACE5ADEFBBB719FBF3FD27FF7196AD8_ComCallableWrapper(obj));
}
