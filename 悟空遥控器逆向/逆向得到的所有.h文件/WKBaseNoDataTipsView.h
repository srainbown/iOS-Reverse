//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface WKBaseNoDataTipsView : UIView
{
    UIImageView *_tipsImageView;
    UILabel *_tipsLabel;
}

@property(nonatomic) __weak UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(nonatomic) __weak UIImageView *tipsImageView; // @synthesize tipsImageView=_tipsImageView;
- (void).cxx_destruct;
- (void)setTipImage:(id)arg1 withTipsMsg:(id)arg2;
- (void)awakeFromNib;

@end

