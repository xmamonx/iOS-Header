//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/WFOAuth2AuthorizationSession-Protocol.h>

@class ASWebAuthenticationSession, NSString, NSURL, WFOAuth2SessionManager;

@interface WFOAuth2WebAuthorizationSession : NSObject <WFOAuth2AuthorizationSession>
{
    ASWebAuthenticationSession *_authenticationSession;
    NSURL *_authorizationURL;
    NSURL *_redirectURI;
    WFOAuth2SessionManager *_sessionManager;
    NSString *_responseType;
    NSString *_state;
    CDUnknownBlockType _completionHandler;
    NSString *_responseKey;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *responseKey; // @synthesize responseKey=_responseKey;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) NSString *state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) NSString *responseType; // @synthesize responseType=_responseType;
@property(readonly, nonatomic) WFOAuth2SessionManager *sessionManager; // @synthesize sessionManager=_sessionManager;
@property(readonly, copy, nonatomic) NSURL *redirectURI; // @synthesize redirectURI=_redirectURI;
@property(readonly, copy, nonatomic) NSURL *authorizationURL; // @synthesize authorizationURL=_authorizationURL;
- (_Bool)resumeSessionWithURL:(id)arg1;
- (_Bool)resumeSessionWithResponseObject:(id)arg1;
@property(readonly, nonatomic) ASWebAuthenticationSession *authenticationSession; // @synthesize authenticationSession=_authenticationSession;
- (id)initWithSessionManager:(id)arg1 authorizationURL:(id)arg2 responseType:(id)arg3 redirectURI:(id)arg4 specifyRedirectURI:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

