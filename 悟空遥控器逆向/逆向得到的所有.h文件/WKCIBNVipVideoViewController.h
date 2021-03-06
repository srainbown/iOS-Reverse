//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WKBaseSubViewController.h"

#import "SDCycleScrollViewDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "WKCIBNBottomGuideViewDelegate.h"
#import "WKVideoCategoryFooterViewDelegate.h"
#import "WKVideoCategoryHeaderViewDelegate.h"

@class CIBNPurchaseWebViewController, NSArray, NSString, SDCycleScrollView, WKBaseVideoCollectionView, WKCIBNBottomGuideView, WKCIBNVideoAuthModel, WKCIBNVipModel, WKCIBNVipVideoModel;

@interface WKCIBNVipVideoViewController : WKBaseSubViewController <UICollectionViewDataSource, UICollectionViewDelegate, SDCycleScrollViewDelegate, WKVideoCategoryHeaderViewDelegate, WKCIBNBottomGuideViewDelegate, WKVideoCategoryFooterViewDelegate>
{
    WKBaseVideoCollectionView *_collectionView;
    SDCycleScrollView *_videoBannerView;
    WKCIBNBottomGuideView *_guideView;
    WKCIBNVipVideoModel *_videoModel;
    WKCIBNVideoAuthModel *_videoAuthModel;
    WKCIBNVipModel *_vipModel;
    NSArray *_bannerDataArray;
    NSArray *_menuDataArray;
    CIBNPurchaseWebViewController *_purchaseWebView;
}

@property(nonatomic) __weak CIBNPurchaseWebViewController *purchaseWebView; // @synthesize purchaseWebView=_purchaseWebView;
@property(retain, nonatomic) NSArray *menuDataArray; // @synthesize menuDataArray=_menuDataArray;
@property(retain, nonatomic) NSArray *bannerDataArray; // @synthesize bannerDataArray=_bannerDataArray;
@property(retain, nonatomic) WKCIBNVipModel *vipModel; // @synthesize vipModel=_vipModel;
@property(retain, nonatomic) WKCIBNVideoAuthModel *videoAuthModel; // @synthesize videoAuthModel=_videoAuthModel;
@property(retain, nonatomic) WKCIBNVipVideoModel *videoModel; // @synthesize videoModel=_videoModel;
@property(retain, nonatomic) WKCIBNBottomGuideView *guideView; // @synthesize guideView=_guideView;
@property(retain, nonatomic) SDCycleScrollView *videoBannerView; // @synthesize videoBannerView=_videoBannerView;
@property(retain, nonatomic) WKBaseVideoCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)cycleScrollView:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)onVideoCategoryFooterViewDelegate:(long long)arg1;
- (void)onVideoCategoryHeaderViewDelegate:(long long)arg1;
- (void)paySuccessNotification:(id)arg1;
- (void)hideLoadingPage;
- (void)showLoadingPageIfNeed;
- (void)showErrorToastWithMsg:(id)arg1;
- (void)requestBuy;
- (void)bottomGuideViewDidBuyButtonClick:(id)arg1;
- (void)CIBNVideoAuth;
- (id)filterVideoDatas:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)searchMenuButtonClicked:(id)arg1;
- (void)updateUIWithNewModel;
- (void)setViewLayout;
- (void)onRecommendVideoSectionViewMoreButtonClicked:(long long)arg1;
- (void)setVideoBannerBottomGuideViewModels:(id)arg1;
- (void)setVideoBannerViewModelArray:(id)arg1;
- (void)updateUI;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

