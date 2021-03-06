//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString, Target;

@interface XmPushActionUnSubscription : NSObject <NSCoding>
{
    NSString *__debug;
    Target *__target;
    NSString *__id;
    NSString *__appId;
    NSString *__topic;
    NSString *__packageName;
    NSString *__category;
    _Bool __debug_isset;
    _Bool __target_isset;
    _Bool __id_isset;
    _Bool __appId_isset;
    _Bool __topic_isset;
    _Bool __packageName_isset;
    _Bool __category_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetCategory;
- (_Bool)categoryIsSet;
@property(retain, nonatomic, getter=category, setter=setCategory:) NSString *category;
- (void)unsetPackageName;
- (_Bool)packageNameIsSet;
@property(retain, nonatomic, getter=packageName, setter=setPackageName:) NSString *packageName;
- (void)unsetTopic;
- (_Bool)topicIsSet;
@property(retain, nonatomic, getter=topic, setter=setTopic:) NSString *topic;
- (void)unsetAppId;
- (_Bool)appIdIsSet;
@property(retain, nonatomic, getter=appId, setter=setAppId:) NSString *appId;
- (void)unsetId;
- (_Bool)idIsSet;
@property(retain, nonatomic, getter=id, setter=setId:) NSString *id;
- (void)unsetTarget;
- (_Bool)targetIsSet;
@property(retain, nonatomic, getter=target, setter=setTarget:) Target *target;
- (void)unsetDebug;
- (_Bool)debugIsSet;
@property(retain, nonatomic, getter=debug, setter=setDebug:) NSString *debug;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDebug:(id)arg1 target:(id)arg2 id:(id)arg3 appId:(id)arg4 topic:(id)arg5 packageName:(id)arg6 category:(id)arg7;

@end

