//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuickLookThumbnailing/NSSecureCoding-Protocol.h>

@class FPSandboxingURLWrapper, NSData, NSString, NSURL;

@interface QLThumbnailItem : NSObject <NSSecureCoding>
{
    NSString *_fileExtensionToken;
    long long _fileExtensionHandle;
    NSURL *_url;
    FPSandboxingURLWrapper *_urlWrapperForExtension;
    FPSandboxingURLWrapper *_urlWrapperForParentDirectory;
    NSData *_data;
    NSString *_overriddenContentType;
    NSString *_computedContentType;
    unsigned long long _downloadStatus;
    _Bool _needsAccessToExternalResources;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property _Bool needsAccessToExternalResources; // @synthesize needsAccessToExternalResources=_needsAccessToExternalResources;
@property(readonly) FPSandboxingURLWrapper *urlWrapperForParentDirectory; // @synthesize urlWrapperForParentDirectory=_urlWrapperForParentDirectory;
@property unsigned long long downloadStatus; // @synthesize downloadStatus=_downloadStatus;
@property(copy) NSString *computedContentType; // @synthesize computedContentType=_computedContentType;
@property(copy, nonatomic) NSString *overriddenContentType; // @synthesize overriddenContentType=_overriddenContentType;
@property(readonly) NSData *data; // @synthesize data=_data;
@property(readonly) FPSandboxingURLWrapper *urlWrapperForExtension; // @synthesize urlWrapperForExtension=_urlWrapperForExtension;
@property(readonly) NSURL *url; // @synthesize url=_url;
- (_Bool)needsDownload;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)consumeFileExtension;
- (void)issueFileExtension;
- (void)dealloc;
- (id)initWithData:(id)arg1 contentType:(id)arg2;
- (id)initWithURL:(id)arg1 URLWrapperForExtension:(id)arg2 URLWrapperForParentDirectory:(id)arg3;
- (id)initWithURL:(id)arg1 URLWrapperForExtension:(id)arg2;
- (id)initWithURL:(id)arg1;

@end

