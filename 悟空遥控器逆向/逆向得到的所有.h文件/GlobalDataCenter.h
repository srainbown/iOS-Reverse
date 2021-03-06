//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface GlobalDataCenter : NSObject
{
    NSArray *_applist;
    NSArray *_needUpdateApplist;
    NSArray *_waitingInstallApps;
    NSArray *_waitingDownLoadApps;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)shareInstance;
@property(retain, nonatomic) NSArray *waitingDownLoadApps; // @synthesize waitingDownLoadApps=_waitingDownLoadApps;
@property(retain, nonatomic) NSArray *waitingInstallApps; // @synthesize waitingInstallApps=_waitingInstallApps;
@property(retain, nonatomic) NSArray *needUpdateApplist; // @synthesize needUpdateApplist=_needUpdateApplist;
@property(retain, nonatomic) NSArray *applist; // @synthesize applist=_applist;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)checkAppNeedDownLoad:(id)arg1;
- (_Bool)checkAppNeedInstall:(id)arg1;
- (_Bool)checkAppNeedUpdate:(id)arg1;
- (_Bool)checkAppAlreayExist:(id)arg1;
- (void)getNeedUpdateAppListFromTV;
- (void)getWaitingDownLoadAppListFromTV;
- (void)getWaitingInstallAppListFromTV;
- (void)fetchInstalledAppListFromTV;
- (void)onChangeDeviceNotification:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

