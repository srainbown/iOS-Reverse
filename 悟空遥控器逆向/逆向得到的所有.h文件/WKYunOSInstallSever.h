//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface WKYunOSInstallSever : NSObject
{
    NSObject<OS_dispatch_queue> *_installSeverQueue;
}

- (void).cxx_destruct;
- (id)getServerApkMetaPath;
- (void)uploadServerApk:(id)arg1 WithSuccessBlock:(CDUnknownBlockType)arg2;
- (_Bool)supportInstallation:(id)arg1;
- (void)installServer:(id)arg1 withResultBlock:(CDUnknownBlockType)arg2;
- (id)installSeverQueue;

@end

