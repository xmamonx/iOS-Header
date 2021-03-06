//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/AFContextProvider-Protocol.h>

@class CNContact, CNContactStore;

__attribute__((visibility("hidden")))
@interface CNSiriContactContextProvider : NSObject <AFContextProvider>
{
    CNContact *_contact;
    CNContactStore *_store;
}

+ (id)descriptorForRequiredKeys;
@property(retain, nonatomic) CNContactStore *store; // @synthesize store=_store;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (id)defaultContextManager;
- (void)_removeContextProviderOnMainThread;
- (void)setEnabled:(_Bool)arg1;
- (id)getCurrentContext;
- (_Bool)allowContextProvider:(id)arg1;
- (void)dealloc;
- (id)initWithContact:(id)arg1 store:(id)arg2;

@end

