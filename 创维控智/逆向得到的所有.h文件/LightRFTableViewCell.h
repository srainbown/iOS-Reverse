//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIButton, UILabel, UIView;

@interface LightRFTableViewCell : UITableViewCell
{
    int _lightCellNumber;
    int _isLightOpen;
    UIView *_viewbg;
    UIView *_viewTitle;
    UIView *_viewVline;
    UIView *_viewHline;
    UIButton *_btnSw;
    UILabel *_lblTitle;
    UIButton *_btnLong;
    id <LightRFTableViewCellDelegate> _delegate;
}

@property(retain, nonatomic) id <LightRFTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIButton *btnLong; // @synthesize btnLong=_btnLong;
@property(nonatomic) __weak UILabel *lblTitle; // @synthesize lblTitle=_lblTitle;
@property(nonatomic) __weak UIButton *btnSw; // @synthesize btnSw=_btnSw;
@property(nonatomic) __weak UIView *viewHline; // @synthesize viewHline=_viewHline;
@property(nonatomic) __weak UIView *viewVline; // @synthesize viewVline=_viewVline;
@property(nonatomic) __weak UIView *viewTitle; // @synthesize viewTitle=_viewTitle;
@property(nonatomic) __weak UIView *viewbg; // @synthesize viewbg=_viewbg;
@property(nonatomic) int isLightOpen; // @synthesize isLightOpen=_isLightOpen;
@property(nonatomic) int lightCellNumber; // @synthesize lightCellNumber=_lightCellNumber;
- (void).cxx_destruct;
- (void)btnLongRFLightStudy:(id)arg1;
- (void)btnLongRFLight:(id)arg1;
- (void)rf_learn:(id)arg1;
- (void)initMyUi;
- (void)initwidth:(int)arg1;
- (void)btnTouchUpInside:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

