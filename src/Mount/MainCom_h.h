

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Wed Nov 28 11:29:27 2018
 */
/* Compiler settings for ..\Mount\MainCom.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __MainCom_h_h__
#define __MainCom_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ITrueCryptMainCom_FWD_DEFINED__
#define __ITrueCryptMainCom_FWD_DEFINED__
typedef interface ITrueCryptMainCom ITrueCryptMainCom;
#endif 	/* __ITrueCryptMainCom_FWD_DEFINED__ */


#ifndef __TrueCryptMainCom_FWD_DEFINED__
#define __TrueCryptMainCom_FWD_DEFINED__

#ifdef __cplusplus
typedef class TrueCryptMainCom TrueCryptMainCom;
#else
typedef struct TrueCryptMainCom TrueCryptMainCom;
#endif /* __cplusplus */

#endif 	/* __TrueCryptMainCom_FWD_DEFINED__ */


/* header files for imported files */
#include "wtypes.h"
#include "Password.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __TrueCryptMainCom_LIBRARY_DEFINED__
#define __TrueCryptMainCom_LIBRARY_DEFINED__

/* library TrueCryptMainCom */
/* [version][helpstring][uuid] */ 


EXTERN_C const IID LIBID_TrueCryptMainCom;

#ifndef __ITrueCryptMainCom_INTERFACE_DEFINED__
#define __ITrueCryptMainCom_INTERFACE_DEFINED__

/* interface ITrueCryptMainCom */
/* [helpstring][oleautomation][object][uuid] */ 


EXTERN_C const IID IID_ITrueCryptMainCom;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C786E27C-2801-482c-B45D-D4357B270A29")
    ITrueCryptMainCom : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE AnalyzeKernelMiniDump( 
            LONG_PTR hwndDlg) = 0;
        
        virtual int STDMETHODCALLTYPE BackupVolumeHeader( 
            LONG_PTR hwndDlg,
            BOOL bRequireConfirmation,
            BSTR lpszVolume) = 0;
        
        virtual DWORD STDMETHODCALLTYPE CallDriver( 
            DWORD ioctl,
            BSTR input,
            BSTR *output) = 0;
        
        virtual int STDMETHODCALLTYPE ChangePassword( 
            BSTR volumePath,
            Password *oldPassword,
            Password *newPassword,
            int pkcs5,
            int wipePassCount,
            LONG_PTR hWnd) = 0;
        
        virtual DWORD STDMETHODCALLTYPE CopyFile( 
            BSTR sourceFile,
            BSTR destinationFile) = 0;
        
        virtual DWORD STDMETHODCALLTYPE DeleteFile( 
            BSTR file) = 0;
        
        virtual BOOL STDMETHODCALLTYPE IsPagingFileActive( 
            BOOL checkNonWindowsPartitionsOnly) = 0;
        
        virtual DWORD STDMETHODCALLTYPE ReadWriteFile( 
            BOOL write,
            BOOL device,
            BSTR filePath,
            BSTR *bufferBstr,
            unsigned __int64 offset,
            unsigned __int32 size,
            DWORD *sizeDone) = 0;
        
        virtual DWORD STDMETHODCALLTYPE RegisterFilterDriver( 
            BOOL registerDriver,
            int filterType) = 0;
        
        virtual DWORD STDMETHODCALLTYPE RegisterSystemFavoritesService( 
            BOOL registerService) = 0;
        
        virtual int STDMETHODCALLTYPE RestoreVolumeHeader( 
            LONG_PTR hwndDlg,
            BSTR lpszVolume) = 0;
        
        virtual DWORD STDMETHODCALLTYPE SetDriverServiceStartType( 
            DWORD startType) = 0;
        
        virtual DWORD STDMETHODCALLTYPE WriteLocalMachineRegistryDwordValue( 
            BSTR keyPath,
            BSTR valueName,
            DWORD value) = 0;
        
        virtual int STDMETHODCALLTYPE ChangePasswordEx( 
            BSTR volumePath,
            Password *oldPassword,
            int old_pkcs5,
            Password *newPassword,
            int pkcs5,
            int wipePassCount,
            LONG_PTR hWnd) = 0;
        
        virtual int STDMETHODCALLTYPE ChangePasswordEx2( 
            BSTR volumePath,
            Password *oldPassword,
            int old_pkcs5,
            BOOL truecryptMode,
            Password *newPassword,
            int pkcs5,
            int wipePassCount,
            LONG_PTR hWnd) = 0;
        
        virtual int STDMETHODCALLTYPE ChangePasswordEx3( 
            BSTR volumePath,
            Password *oldPassword,
            int old_pkcs5,
            int old_pim,
            BOOL truecryptMode,
            Password *newPassword,
            int pkcs5,
            int pim,
            int wipePassCount,
            LONG_PTR hWnd) = 0;
        
        virtual DWORD STDMETHODCALLTYPE GetFileSize( 
            BSTR filePath,
            unsigned __int64 *pSize) = 0;
        
        virtual DWORD STDMETHODCALLTYPE DeviceIoControl( 
            BOOL readOnly,
            BOOL device,
            BSTR filePath,
            DWORD dwIoControlCode,
            BSTR input,
            BSTR *output) = 0;
        
        virtual DWORD STDMETHODCALLTYPE InstallEfiBootLoader( 
            BOOL preserveUserConfig,
            BOOL hiddenOSCreation,
            int pim,
            int hashAlg) = 0;
        
        virtual DWORD STDMETHODCALLTYPE BackupEfiSystemLoader( void) = 0;
        
        virtual DWORD STDMETHODCALLTYPE RestoreEfiSystemLoader( void) = 0;
        
        virtual DWORD STDMETHODCALLTYPE GetEfiBootDeviceNumber( 
            BSTR *pSdn) = 0;
        
        virtual DWORD STDMETHODCALLTYPE WriteEfiBootSectorUserConfig( 
            DWORD userConfig,
            BSTR customUserMessage,
            int pim,
            int hashAlg) = 0;
        
        virtual DWORD STDMETHODCALLTYPE UpdateSetupConfigFile( 
            BOOL bForInstall) = 0;
        
        virtual DWORD STDMETHODCALLTYPE GetSecureBootConfig( 
            BOOL *pSecureBootEnabled,
            BOOL *pVeraCryptKeysLoaded) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITrueCryptMainComVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITrueCryptMainCom * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITrueCryptMainCom * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITrueCryptMainCom * This);
        
        void ( STDMETHODCALLTYPE *AnalyzeKernelMiniDump )( 
            ITrueCryptMainCom * This,
            LONG_PTR hwndDlg);
        
        int ( STDMETHODCALLTYPE *BackupVolumeHeader )( 
            ITrueCryptMainCom * This,
            LONG_PTR hwndDlg,
            BOOL bRequireConfirmation,
            BSTR lpszVolume);
        
        DWORD ( STDMETHODCALLTYPE *CallDriver )( 
            ITrueCryptMainCom * This,
            DWORD ioctl,
            BSTR input,
            BSTR *output);
        
        int ( STDMETHODCALLTYPE *ChangePassword )( 
            ITrueCryptMainCom * This,
            BSTR volumePath,
            Password *oldPassword,
            Password *newPassword,
            int pkcs5,
            int wipePassCount,
            LONG_PTR hWnd);
        
        DWORD ( STDMETHODCALLTYPE *CopyFile )( 
            ITrueCryptMainCom * This,
            BSTR sourceFile,
            BSTR destinationFile);
        
        DWORD ( STDMETHODCALLTYPE *DeleteFile )( 
            ITrueCryptMainCom * This,
            BSTR file);
        
        BOOL ( STDMETHODCALLTYPE *IsPagingFileActive )( 
            ITrueCryptMainCom * This,
            BOOL checkNonWindowsPartitionsOnly);
        
        DWORD ( STDMETHODCALLTYPE *ReadWriteFile )( 
            ITrueCryptMainCom * This,
            BOOL write,
            BOOL device,
            BSTR filePath,
            BSTR *bufferBstr,
            unsigned __int64 offset,
            unsigned __int32 size,
            DWORD *sizeDone);
        
        DWORD ( STDMETHODCALLTYPE *RegisterFilterDriver )( 
            ITrueCryptMainCom * This,
            BOOL registerDriver,
            int filterType);
        
        DWORD ( STDMETHODCALLTYPE *RegisterSystemFavoritesService )( 
            ITrueCryptMainCom * This,
            BOOL registerService);
        
        int ( STDMETHODCALLTYPE *RestoreVolumeHeader )( 
            ITrueCryptMainCom * This,
            LONG_PTR hwndDlg,
            BSTR lpszVolume);
        
        DWORD ( STDMETHODCALLTYPE *SetDriverServiceStartType )( 
            ITrueCryptMainCom * This,
            DWORD startType);
        
        DWORD ( STDMETHODCALLTYPE *WriteLocalMachineRegistryDwordValue )( 
            ITrueCryptMainCom * This,
            BSTR keyPath,
            BSTR valueName,
            DWORD value);
        
        int ( STDMETHODCALLTYPE *ChangePasswordEx )( 
            ITrueCryptMainCom * This,
            BSTR volumePath,
            Password *oldPassword,
            int old_pkcs5,
            Password *newPassword,
            int pkcs5,
            int wipePassCount,
            LONG_PTR hWnd);
        
        int ( STDMETHODCALLTYPE *ChangePasswordEx2 )( 
            ITrueCryptMainCom * This,
            BSTR volumePath,
            Password *oldPassword,
            int old_pkcs5,
            BOOL truecryptMode,
            Password *newPassword,
            int pkcs5,
            int wipePassCount,
            LONG_PTR hWnd);
        
        int ( STDMETHODCALLTYPE *ChangePasswordEx3 )( 
            ITrueCryptMainCom * This,
            BSTR volumePath,
            Password *oldPassword,
            int old_pkcs5,
            int old_pim,
            BOOL truecryptMode,
            Password *newPassword,
            int pkcs5,
            int pim,
            int wipePassCount,
            LONG_PTR hWnd);
        
        DWORD ( STDMETHODCALLTYPE *GetFileSize )( 
            ITrueCryptMainCom * This,
            BSTR filePath,
            unsigned __int64 *pSize);
        
        DWORD ( STDMETHODCALLTYPE *DeviceIoControl )( 
            ITrueCryptMainCom * This,
            BOOL readOnly,
            BOOL device,
            BSTR filePath,
            DWORD dwIoControlCode,
            BSTR input,
            BSTR *output);
        
        DWORD ( STDMETHODCALLTYPE *InstallEfiBootLoader )( 
            ITrueCryptMainCom * This,
            BOOL preserveUserConfig,
            BOOL hiddenOSCreation,
            int pim,
            int hashAlg);
        
        DWORD ( STDMETHODCALLTYPE *BackupEfiSystemLoader )( 
            ITrueCryptMainCom * This);
        
        DWORD ( STDMETHODCALLTYPE *RestoreEfiSystemLoader )( 
            ITrueCryptMainCom * This);
        
        DWORD ( STDMETHODCALLTYPE *GetEfiBootDeviceNumber )( 
            ITrueCryptMainCom * This,
            BSTR *pSdn);
        
        DWORD ( STDMETHODCALLTYPE *WriteEfiBootSectorUserConfig )( 
            ITrueCryptMainCom * This,
            DWORD userConfig,
            BSTR customUserMessage,
            int pim,
            int hashAlg);
        
        DWORD ( STDMETHODCALLTYPE *UpdateSetupConfigFile )( 
            ITrueCryptMainCom * This,
            BOOL bForInstall);
        
        DWORD ( STDMETHODCALLTYPE *GetSecureBootConfig )( 
            ITrueCryptMainCom * This,
            BOOL *pSecureBootEnabled,
            BOOL *pVeraCryptKeysLoaded);
        
        END_INTERFACE
    } ITrueCryptMainComVtbl;

    interface ITrueCryptMainCom
    {
        CONST_VTBL struct ITrueCryptMainComVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITrueCryptMainCom_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITrueCryptMainCom_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITrueCryptMainCom_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITrueCryptMainCom_AnalyzeKernelMiniDump(This,hwndDlg)	\
    ( (This)->lpVtbl -> AnalyzeKernelMiniDump(This,hwndDlg) ) 

#define ITrueCryptMainCom_BackupVolumeHeader(This,hwndDlg,bRequireConfirmation,lpszVolume)	\
    ( (This)->lpVtbl -> BackupVolumeHeader(This,hwndDlg,bRequireConfirmation,lpszVolume) ) 

#define ITrueCryptMainCom_CallDriver(This,ioctl,input,output)	\
    ( (This)->lpVtbl -> CallDriver(This,ioctl,input,output) ) 

#define ITrueCryptMainCom_ChangePassword(This,volumePath,oldPassword,newPassword,pkcs5,wipePassCount,hWnd)	\
    ( (This)->lpVtbl -> ChangePassword(This,volumePath,oldPassword,newPassword,pkcs5,wipePassCount,hWnd) ) 

#define ITrueCryptMainCom_CopyFile(This,sourceFile,destinationFile)	\
    ( (This)->lpVtbl -> CopyFile(This,sourceFile,destinationFile) ) 

#define ITrueCryptMainCom_DeleteFile(This,file)	\
    ( (This)->lpVtbl -> DeleteFile(This,file) ) 

#define ITrueCryptMainCom_IsPagingFileActive(This,checkNonWindowsPartitionsOnly)	\
    ( (This)->lpVtbl -> IsPagingFileActive(This,checkNonWindowsPartitionsOnly) ) 

#define ITrueCryptMainCom_ReadWriteFile(This,write,device,filePath,bufferBstr,offset,size,sizeDone)	\
    ( (This)->lpVtbl -> ReadWriteFile(This,write,device,filePath,bufferBstr,offset,size,sizeDone) ) 

#define ITrueCryptMainCom_RegisterFilterDriver(This,registerDriver,filterType)	\
    ( (This)->lpVtbl -> RegisterFilterDriver(This,registerDriver,filterType) ) 

#define ITrueCryptMainCom_RegisterSystemFavoritesService(This,registerService)	\
    ( (This)->lpVtbl -> RegisterSystemFavoritesService(This,registerService) ) 

#define ITrueCryptMainCom_RestoreVolumeHeader(This,hwndDlg,lpszVolume)	\
    ( (This)->lpVtbl -> RestoreVolumeHeader(This,hwndDlg,lpszVolume) ) 

#define ITrueCryptMainCom_SetDriverServiceStartType(This,startType)	\
    ( (This)->lpVtbl -> SetDriverServiceStartType(This,startType) ) 

#define ITrueCryptMainCom_WriteLocalMachineRegistryDwordValue(This,keyPath,valueName,value)	\
    ( (This)->lpVtbl -> WriteLocalMachineRegistryDwordValue(This,keyPath,valueName,value) ) 

#define ITrueCryptMainCom_ChangePasswordEx(This,volumePath,oldPassword,old_pkcs5,newPassword,pkcs5,wipePassCount,hWnd)	\
    ( (This)->lpVtbl -> ChangePasswordEx(This,volumePath,oldPassword,old_pkcs5,newPassword,pkcs5,wipePassCount,hWnd) ) 

#define ITrueCryptMainCom_ChangePasswordEx2(This,volumePath,oldPassword,old_pkcs5,truecryptMode,newPassword,pkcs5,wipePassCount,hWnd)	\
    ( (This)->lpVtbl -> ChangePasswordEx2(This,volumePath,oldPassword,old_pkcs5,truecryptMode,newPassword,pkcs5,wipePassCount,hWnd) ) 

#define ITrueCryptMainCom_ChangePasswordEx3(This,volumePath,oldPassword,old_pkcs5,old_pim,truecryptMode,newPassword,pkcs5,pim,wipePassCount,hWnd)	\
    ( (This)->lpVtbl -> ChangePasswordEx3(This,volumePath,oldPassword,old_pkcs5,old_pim,truecryptMode,newPassword,pkcs5,pim,wipePassCount,hWnd) ) 

#define ITrueCryptMainCom_GetFileSize(This,filePath,pSize)	\
    ( (This)->lpVtbl -> GetFileSize(This,filePath,pSize) ) 

#define ITrueCryptMainCom_DeviceIoControl(This,readOnly,device,filePath,dwIoControlCode,input,output)	\
    ( (This)->lpVtbl -> DeviceIoControl(This,readOnly,device,filePath,dwIoControlCode,input,output) ) 

#define ITrueCryptMainCom_InstallEfiBootLoader(This,preserveUserConfig,hiddenOSCreation,pim,hashAlg)	\
    ( (This)->lpVtbl -> InstallEfiBootLoader(This,preserveUserConfig,hiddenOSCreation,pim,hashAlg) ) 

#define ITrueCryptMainCom_BackupEfiSystemLoader(This)	\
    ( (This)->lpVtbl -> BackupEfiSystemLoader(This) ) 

#define ITrueCryptMainCom_RestoreEfiSystemLoader(This)	\
    ( (This)->lpVtbl -> RestoreEfiSystemLoader(This) ) 

#define ITrueCryptMainCom_GetEfiBootDeviceNumber(This,pSdn)	\
    ( (This)->lpVtbl -> GetEfiBootDeviceNumber(This,pSdn) ) 

#define ITrueCryptMainCom_WriteEfiBootSectorUserConfig(This,userConfig,customUserMessage,pim,hashAlg)	\
    ( (This)->lpVtbl -> WriteEfiBootSectorUserConfig(This,userConfig,customUserMessage,pim,hashAlg) ) 

#define ITrueCryptMainCom_UpdateSetupConfigFile(This,bForInstall)	\
    ( (This)->lpVtbl -> UpdateSetupConfigFile(This,bForInstall) ) 

#define ITrueCryptMainCom_GetSecureBootConfig(This,pSecureBootEnabled,pVeraCryptKeysLoaded)	\
    ( (This)->lpVtbl -> GetSecureBootConfig(This,pSecureBootEnabled,pVeraCryptKeysLoaded) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITrueCryptMainCom_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_TrueCryptMainCom;

#ifdef __cplusplus

class DECLSPEC_UUID("FE8B3B95-C80C-41f7-830F-FBA271C26F7E")
TrueCryptMainCom;
#endif
#endif /* __TrueCryptMainCom_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


