//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel, WKCIBNVideoAuthModel, WKCIBNVipVideoModel;

@interface WKCIBNBottomGuideView : UIView
{
    UILabel *_descriptionLabel;
    UIView *_purchaseContainerView;
    UIView *_notPurchaseContainerView;
    UILabel *_purchasedInfoLabel;
    UIButton *_purchasedBuyButton;
    UILabel *_notPurchasedInfoLabel;
    UIButton *_notPurchasedBuyButton;
    id <WKCIBNBottomGuideViewDelegate> _delegate;
    WKCIBNVipVideoModel *_videoModel;
    WKCIBNVideoAuthModel *_videoAuthModel;
    double _heightForCIBNBottomGuideView;
}

@property(nonatomic) double heightForCIBNBottomGuideView; // @synthesize heightForCIBNBottomGuideView=_heightForCIBNBottomGuideView;
@property(retain, nonatomic) WKCIBNVideoAuthModel *videoAuthModel; // @synthesize videoAuthModel=_videoAuthModel;
@property(retain, nonatomic) WKCIBNVipVideoModel *videoModel; // @synthesize videoModel=_videoModel;
@property(nonatomic) __weak id <WKCIBNBottomGuideViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIButton *notPurchasedBuyButton; // @synthesize notPurchasedBuyButton=_notPurchasedBuyButton;
@property(nonatomic) __weak UILabel *notPurchasedInfoLabel; // @synthesize notPurchasedInfoLabel=_notPurchasedInfoLabel;
@property(nonatomic) __weak UIButton *purchasedBuyButton; // @synthesize purchasedBuyButton=_purchasedBuyButton;
@property(nonatomic) __weak UILabel *purchasedInfoLabel; // @synthesize purchasedInfoLabel=_purchasedInfoLabel;
@property(nonatomic) __weak UIView *notPurchaseContainerView; // @synthesize notPurchaseContainerView=_notPurchaseContainerView;
@property(nonatomic) __weak UIView *purchaseContainerView; // @synthesize purchaseContainerView=_purchaseContainerView;
@property(nonatomic) __weak UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
- (void).cxx_destruct;
- (void)buyButtonClick:(id)arg1;
- (void)setVipVideoModel:(id)arg1 videoAuthModel:(id)arg2;
- (void)awakeFromNib;

@end

