//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MiPushNetWorkBaseUtils.h"

@interface MiPushNetWorkUtils : MiPushNetWorkBaseUtils
{
}

+ (id)sharedNetworkSingleton;
- (id)requestAccountList:(id)arg1;
- (id)requestTopicList:(id)arg1;
- (id)requestAliasList:(id)arg1;
- (id)requestNotify:(id)arg1;
- (id)requestUnsubscribe:(id)arg1;
- (id)requestSubscribe:(id)arg1;
- (id)requestUnsetAccount:(id)arg1;
- (id)requestSetAccount:(id)arg1;
- (id)requestUnsetAlias:(id)arg1;
- (id)requestSetAlias:(id)arg1;
- (id)unregisterToken:(id)arg1;
- (id)updateToken:(id)arg1;
- (id)requestRegisterApp:(id)arg1;
- (id)requestMiPush:(id)arg1;

@end

