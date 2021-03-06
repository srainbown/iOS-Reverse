//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BaiduMobAdActionComposer, BaiduMobAdInstance, BaiduMobAdRequestInfo, BaiduMobAdResponse, UIView, UIViewController;

@interface BaiduMobAdRendererHelper : NSObject
{
    BaiduMobAdInstance *_adInstance;
    BaiduMobAdRequestInfo *_adRequestInfo;
    BaiduMobAdResponse *_adResponse;
    id <IBaiduMobAdRenderEventDelegate> _adRenderEventDelegate;
    UIView *_slotBase;
    UIViewController *_slotBaseVC;
    BaiduMobAdActionComposer *_composer;
}

@property(retain, nonatomic) BaiduMobAdActionComposer *composer; // @synthesize composer=_composer;
@property(retain, nonatomic) UIViewController *slotBaseVC; // @synthesize slotBaseVC=_slotBaseVC;
@property(nonatomic) UIView *slotBase; // @synthesize slotBase=_slotBase;
@property(nonatomic) id <IBaiduMobAdRenderEventDelegate> adRenderEventDelegate; // @synthesize adRenderEventDelegate=_adRenderEventDelegate;
@property(retain, nonatomic) BaiduMobAdResponse *adResponse; // @synthesize adResponse=_adResponse;
@property(retain, nonatomic) BaiduMobAdRequestInfo *adRequestInfo; // @synthesize adRequestInfo=_adRequestInfo;
@property(retain, nonatomic) BaiduMobAdInstance *adInstance; // @synthesize adInstance=_adInstance;
- (void)processEvent:(id)arg1 info:(id)arg2;
- (void)requestTimelinePause;
- (void)requestTimelineResume;
- (void)dealloc;
- (id)getPropertyString;
- (id)curl;
- (id)getSN;
- (void)sendFeedsTypeLog:(id)arg1;
- (void)trackVideoEvent:(int)arg1 withCurrentTime:(double)arg2;
- (id)monVClickStartCardArray;
- (id)monVClickArray;
- (id)monVFullScreenArray;
- (id)monVCloseArray;
- (id)monVStartArray;
- (id)monShowArray;
- (id)moniterDictionary;
- (id)getParameter:(id)arg1;
- (void)sendShowLog;
- (id)apoUrl:(id)arg1;
- (void)nativeAdClick:(id)arg1;

@end

