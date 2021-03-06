//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSIndexPath, NSString, UIActivityIndicatorView, UILabel, UISwitch;

@interface P2PSwitchCell : UITableViewCell
{
    _Bool _isProgressViewHidden;
    _Bool _isSwitchViewHidden;
    _Bool _on;
    NSString *_leftLabelText;
    UILabel *_leftLabelView;
    UIActivityIndicatorView *_progressView;
    UISwitch *_switchView;
    id <SwitchCellDelegate> _delegate;
    NSIndexPath *_indexPath;
}

@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property id <SwitchCellDelegate> delegate; // @synthesize delegate=_delegate;
@property _Bool on; // @synthesize on=_on;
@property _Bool isSwitchViewHidden; // @synthesize isSwitchViewHidden=_isSwitchViewHidden;
@property _Bool isProgressViewHidden; // @synthesize isProgressViewHidden=_isProgressViewHidden;
@property(retain, nonatomic) UISwitch *switchView; // @synthesize switchView=_switchView;
@property(retain, nonatomic) UIActivityIndicatorView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UILabel *leftLabelView; // @synthesize leftLabelView=_leftLabelView;
@property(retain, nonatomic) NSString *leftLabelText; // @synthesize leftLabelText=_leftLabelText;
- (void)onSwitchValueChange:(id)arg1;
- (void)setSwitchViewHidden:(_Bool)arg1;
- (void)setProgressViewHidden:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

