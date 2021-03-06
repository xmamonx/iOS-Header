//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXTextContentProvider-Protocol.h>

@class NSString, SXDocument;

@interface SXDocumentTextContentProvider : NSObject <SXTextContentProvider>
{
    SXDocument *_document;
}

+ (id)sharedQueue;
- (void).cxx_destruct;
@property(readonly, nonatomic) SXDocument *document; // @synthesize document=_document;
- (_Bool)contentRelevance:(unsigned long long)arg1 isValidForType:(unsigned long long)arg2;
- (_Bool)classification:(id)arg1 isValidForType:(unsigned long long)arg2;
- (id)textContentForComponent:(id)arg1 withType:(unsigned long long)arg2;
- (id)textContentForComponents:(id)arg1 withType:(unsigned long long)arg2;
- (void)textContentForType:(unsigned long long)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (id)initWithDocument:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

