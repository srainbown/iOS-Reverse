//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "WKCIBNVideoDetailToolsViewDelegate.h"

@class NSString, UIImageView, UILabel, WKCIBNVideoDetailModel, WKCIBNVideoDetailToolsView;

@interface WKCIBNVideoDetailBannerView : UIView <WKCIBNVideoDetailToolsViewDelegate>
{
    UIImageView *bannerImageView;
    UILabel *videoTitleLabel;
    UILabel *directorLabel;
    UILabel *actorLabel;
    UILabel *yearLabel;
    UILabel *areaLabel;
    WKCIBNVideoDetailToolsView *playToolsView;
    UIImageView *blurImageView;
    UIImageView *cornerImageView;
    id <WKCIBNVideoDetailBannerViewDelegate> _delegate;
    WKCIBNVideoDetailModel *_detailmodel;
    UIView *_tagContainerView;
}

@property(retain, nonatomic) UIView *tagContainerView; // @synthesize tagContainerView=_tagContainerView;
@property(retain, nonatomic) WKCIBNVideoDetailModel *detailmodel; // @synthesize detailmodel=_detailmodel;
@property(nonatomic) __weak id <WKCIBNVideoDetailBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *cornerImageView; // @synthesize cornerImageView;
@property(retain, nonatomic) UIImageView *blurImageView; // @synthesize blurImageView;
@property(retain, nonatomic) WKCIBNVideoDetailToolsView *playToolsView; // @synthesize playToolsView;
@property(retain, nonatomic) UILabel *areaLabel; // @synthesize areaLabel;
@property(retain, nonatomic) UILabel *yearLabel; // @synthesize yearLabel;
@property(retain, nonatomic) UILabel *actorLabel; // @synthesize actorLabel;
@property(retain, nonatomic) UILabel *directorLabel; // @synthesize directorLabel;
@property(retain, nonatomic) UILabel *videoTitleLabel; // @synthesize videoTitleLabel;
@property(retain, nonatomic) UIImageView *bannerImageView; // @synthesize bannerImageView;
- (void).cxx_destruct;
- (void)bannerImageViewLongClick:(id)arg1;
- (void)dealloc;
- (void)onBannerViewLeftButtonClicked;
- (void)onBannerViewRightButtonClicked;
- (id)attributedString:(id)arg1;
- (void)setVideoAuthModel:(id)arg1 detailModel:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

