

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

MIDL_DEFINE_GUID(IID, IID_ICorDebugManagedCallback,0x3d6f5f60,0x7538,0x11d3,0x8d,0x5b,0x00,0x10,0x4b,0x35,0xe7,0xef);


MIDL_DEFINE_GUID(IID, IID_ICorDebugManagedCallback3,0x264EA0FC,0x2591,0x49AA,0x86,0x8E,0x83,0x5E,0x65,0x15,0x32,0x3F);


MIDL_DEFINE_GUID(IID, IID_ICorDebugManagedCallback2,0x250E5EEA,0xDB5C,0x4C76,0xB6,0xF3,0x8C,0x46,0xF1,0x2E,0x32,0x03);

class ManagedCallback : public ICorDebugManagedCallback, ICorDebugManagedCallback2
{
public:
    // IUnknown
    virtual HRESULT STDMETHODCALLTYPE QueryInterface( 
        REFIID riid,
        void **ppvObj) 
    {
        if (!ppvObj)
            return E_INVALIDARG;

        *ppvObj = NULL;
        if (/* riid == IID_IUnknown || */ riid == IID_ICorDebugManagedCallback
             || riid == IID_ICorDebugManagedCallback2)
        {
            // Increment the reference count and return the pointer.
            *ppvObj = (LPVOID)this;
            AddRef();
            return S_OK;
        }

        return E_NOINTERFACE;
    }
        
    virtual ULONG STDMETHODCALLTYPE AddRef( void) { return 1; }
        
    virtual ULONG STDMETHODCALLTYPE Release( void) { return 1; }

    // ICorDebugManagedCallback
    virtual HRESULT STDMETHODCALLTYPE Breakpoint( 
        /* [in] */ ICorDebugAppDomain *pAppDomain,
        /* [in] */ ICorDebugThread *pThread,
        /* [in] */ ICorDebugBreakpoint *pBreakpoint){ return S_OK; }
    
    virtual HRESULT STDMETHODCALLTYPE StepComplete( 
        /* [in] */ ICorDebugAppDomain *pAppDomain,
        /* [in] */ ICorDebugThread *pThread,
        /* [in] */ ICorDebugStepper *pStepper,
        /* [in] */ CorDebugStepReason reason){ return S_OK; }
    
    virtual HRESULT STDMETHODCALLTYPE Break( 
        /* [in] */ ICorDebugAppDomain *pAppDomain,
        /* [in] */ ICorDebugThread *thread){ return S_OK; }
    
    virtual HRESULT STDMETHODCALLTYPE Exception( 
        /* [in] */ ICorDebugAppDomain *pAppDomain,
        /* [in] */ ICorDebugThread *pThread,
        /* [in] */ BOOL unhandled){ return S_OK; }
    
    virtual HRESULT STDMETHODCALLTYPE EvalComplete( 
        /* [in] */ ICorDebugAppDomain *pAppDomain,
        /* [in] */ ICorDebugThread *pThread,
        /* [in] */ ICorDebugEval *pEval){ return S_OK; }
    
    virtual HRESULT STDMETHODCALLTYPE EvalException( 
        /* [in] */ ICorDebugAppDomain *pAppDomain,
        /* [in] */ ICorDebugThread *pThread,
        /* [in] */ ICorDebugEval *pEval){ return S_OK; }
    
    virtual HRESULT STDMETHODCALLTYPE CreateProcess( 
        /* [in] */ ICorDebugProcess *pProcess){ return S_OK; }
    
    virtual HRESULT STDMETHODCALLTYPE ExitProcess( 
        /* [in] */ ICorDebugProcess *pProcess){ return S_OK; }
    
    virtual HRESULT STDMETHODCALLTYPE CreateThread( 
        /* [in] */ ICorDebugAppDomain *pAppDomain,
        /* [in] */ ICorDebugThread *thread){ return S_OK; }
    
    virtual HRESULT STDMETHODCALLTYPE ExitThread( 
        /* [in] */ ICorDebugAppDomain *pAppDomain,
        /* [in] */ ICorDebugThread *thread){ return S_OK; }
    
    virtual HRESULT STDMETHODCALLTYPE LoadModule( 
        /* [in] */ ICorDebugAppDomain *pAppDomain,
        /* [in] */ ICorDebugModule *pModule){ return S_OK; }
    
    virtual HRESULT STDMETHODCALLTYPE UnloadModule( 
        /* [in] */ ICorDebugAppDomain *pAppDomain,
        /* [in] */ ICorDebugModule *pModule){ return S_OK; }
    
    virtual HRESULT STDMETHODCALLTYPE LoadClass( 
        /* [in] */ ICorDebugAppDomain *pAppDomain,
        /* [in] */ ICorDebugClass *c){ return S_OK; }
    
    virtual HRESULT STDMETHODCALLTYPE UnloadClass( 
        /* [in] */ ICorDebugAppDomain *pAppDomain,
        /* [in] */ ICorDebugClass *c){ return S_OK; }
    
    virtual HRESULT STDMETHODCALLTYPE DebuggerError( 
        /* [in] */ ICorDebugProcess *pProcess,
        /* [in] */ HRESULT errorHR,
        /* [in] */ DWORD errorCode){ return S_OK; }
    
    virtual HRESULT STDMETHODCALLTYPE LogMessage( 
        /* [in] */ ICorDebugAppDomain *pAppDomain,
        /* [in] */ ICorDebugThread *pThread,
        /* [in] */ LONG lLevel,
        /* [in] */ WCHAR *pLogSwitchName,
        /* [in] */ WCHAR *pMessage){ return S_OK; }
    
    virtual HRESULT STDMETHODCALLTYPE LogSwitch( 
        /* [in] */ ICorDebugAppDomain *pAppDomain,
        /* [in] */ ICorDebugThread *pThread,
        /* [in] */ LONG lLevel,
        /* [in] */ ULONG ulReason,
        /* [in] */ WCHAR *pLogSwitchName,
        /* [in] */ WCHAR *pParentName){ return S_OK; }
    
    virtual HRESULT STDMETHODCALLTYPE CreateAppDomain( 
        /* [in] */ ICorDebugProcess *pProcess,
        /* [in] */ ICorDebugAppDomain *pAppDomain){ return S_OK; }
    
    virtual HRESULT STDMETHODCALLTYPE ExitAppDomain( 
        /* [in] */ ICorDebugProcess *pProcess,
        /* [in] */ ICorDebugAppDomain *pAppDomain){ return S_OK; }
    
    virtual HRESULT STDMETHODCALLTYPE LoadAssembly( 
        /* [in] */ ICorDebugAppDomain *pAppDomain,
        /* [in] */ ICorDebugAssembly *pAssembly){ return S_OK; }
    
    virtual HRESULT STDMETHODCALLTYPE UnloadAssembly( 
        /* [in] */ ICorDebugAppDomain *pAppDomain,
        /* [in] */ ICorDebugAssembly *pAssembly){ return S_OK; }
    
    virtual HRESULT STDMETHODCALLTYPE ControlCTrap( 
        /* [in] */ ICorDebugProcess *pProcess){ return S_OK; }
    
    virtual HRESULT STDMETHODCALLTYPE NameChange( 
        /* [in] */ ICorDebugAppDomain *pAppDomain,
        /* [in] */ ICorDebugThread *pThread){ return S_OK; }
    
    virtual HRESULT STDMETHODCALLTYPE UpdateModuleSymbols( 
        /* [in] */ ICorDebugAppDomain *pAppDomain,
        /* [in] */ ICorDebugModule *pModule,
        /* [in] */ IStream *pSymbolStream){ return S_OK; }
    
    virtual HRESULT STDMETHODCALLTYPE EditAndContinueRemap( 
        /* [in] */ ICorDebugAppDomain *pAppDomain,
        /* [in] */ ICorDebugThread *pThread,
        /* [in] */ ICorDebugFunction *pFunction,
        /* [in] */ BOOL fAccurate){ return S_OK; }
    
    virtual HRESULT STDMETHODCALLTYPE BreakpointSetError( 
        /* [in] */ ICorDebugAppDomain *pAppDomain,
        /* [in] */ ICorDebugThread *pThread,
        /* [in] */ ICorDebugBreakpoint *pBreakpoint,
        /* [in] */ DWORD dwError){ return S_OK; }
    

    // ICorDebugManagedCallback2
    virtual HRESULT STDMETHODCALLTYPE FunctionRemapOpportunity( 
        /* [in] */ ICorDebugAppDomain *pAppDomain,
        /* [in] */ ICorDebugThread *pThread,
        /* [in] */ ICorDebugFunction *pOldFunction,
        /* [in] */ ICorDebugFunction *pNewFunction,
        /* [in] */ ULONG32 oldILOffset){ return S_OK; }
    
    virtual HRESULT STDMETHODCALLTYPE CreateConnection( 
        /* [in] */ ICorDebugProcess *pProcess,
        /* [in] */ CONNID dwConnectionId,
        /* [in] */ WCHAR *pConnName){ return S_OK; }
    
    virtual HRESULT STDMETHODCALLTYPE ChangeConnection( 
        /* [in] */ ICorDebugProcess *pProcess,
        /* [in] */ CONNID dwConnectionId){ return S_OK; }
    
    virtual HRESULT STDMETHODCALLTYPE DestroyConnection( 
        /* [in] */ ICorDebugProcess *pProcess,
        /* [in] */ CONNID dwConnectionId){ return S_OK; }
    
    virtual HRESULT STDMETHODCALLTYPE Exception( 
        /* [in] */ ICorDebugAppDomain *pAppDomain,
        /* [in] */ ICorDebugThread *pThread,
        /* [in] */ ICorDebugFrame *pFrame,
        /* [in] */ ULONG32 nOffset,
        /* [in] */ CorDebugExceptionCallbackType dwEventType,
        /* [in] */ DWORD dwFlags){ return S_OK; }
    
    virtual HRESULT STDMETHODCALLTYPE ExceptionUnwind( 
        /* [in] */ ICorDebugAppDomain *pAppDomain,
        /* [in] */ ICorDebugThread *pThread,
        /* [in] */ CorDebugExceptionUnwindCallbackType dwEventType,
        /* [in] */ DWORD dwFlags){ return S_OK; }
    
    virtual HRESULT STDMETHODCALLTYPE FunctionRemapComplete( 
        /* [in] */ ICorDebugAppDomain *pAppDomain,
        /* [in] */ ICorDebugThread *pThread,
        /* [in] */ ICorDebugFunction *pFunction){ return S_OK; }
    
    virtual HRESULT STDMETHODCALLTYPE MDANotification( 
        /* [in] */ ICorDebugController *pController,
        /* [in] */ ICorDebugThread *pThread,
        /* [in] */ ICorDebugMDA *pMDA){ return S_OK; }
    

};