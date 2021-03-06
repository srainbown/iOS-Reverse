//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString, WKSDKPlayControlHeartBeatMsg, WKVideoInfo;

@interface WKPlayControlModel : NSObject
{
    unsigned long long _playTime;
    unsigned long long _totalTime;
    unsigned long long _volumeLevel;
    unsigned long long _definition;
    unsigned long long _playStatus;
    NSString *_videoTitle;
    NSString *_bannerImageUrl;
    NSData *_bannerImageData;
    NSString *_pSid;
    NSString *_episodeSid;
    NSString *_contentType;
    long long _contrlMode;
    NSString *_posterImageUrl;
    WKSDKPlayControlHeartBeatMsg *_videoHeartbeatMsg;
    WKVideoInfo *_videoInfo;
}

@property(retain, nonatomic) WKVideoInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(retain, nonatomic) WKSDKPlayControlHeartBeatMsg *videoHeartbeatMsg; // @synthesize videoHeartbeatMsg=_videoHeartbeatMsg;
@property(retain, nonatomic) NSString *posterImageUrl; // @synthesize posterImageUrl=_posterImageUrl;
@property(nonatomic) long long contrlMode; // @synthesize contrlMode=_contrlMode;
@property(retain, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSString *episodeSid; // @synthesize episodeSid=_episodeSid;
@property(retain, nonatomic) NSString *pSid; // @synthesize pSid=_pSid;
@property(retain, nonatomic) NSData *bannerImageData; // @synthesize bannerImageData=_bannerImageData;
@property(retain, nonatomic) NSString *bannerImageUrl; // @synthesize bannerImageUrl=_bannerImageUrl;
@property(retain, nonatomic) NSString *videoTitle; // @synthesize videoTitle=_videoTitle;
@property(nonatomic) unsigned long long playStatus; // @synthesize playStatus=_playStatus;
@property(nonatomic) unsigned long long definition; // @synthesize definition=_definition;
@property(nonatomic) unsigned long long volumeLevel; // @synthesize volumeLevel=_volumeLevel;
@property(nonatomic) unsigned long long totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic) unsigned long long playTime; // @synthesize playTime=_playTime;
- (void).cxx_destruct;
- (_Bool)checkoutData;
- (long long)getCurrentEpisodePosition;
- (_Bool)checkPrivateIdChange:(id)arg1;
- (_Bool)isRight;
- (void)setPrivateId:(id)arg1;
- (void)refreshSdk:(id)arg1;
- (id)initWithMsg:(id)arg1;
- (id)initWithDataModel:(id)arg1;

@end

