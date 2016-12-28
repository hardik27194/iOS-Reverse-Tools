//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseTableViewController.h"

#import "AJAlertViewDelegate.h"
#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"
#import "UITextFieldDelegate.h"

@class BaseTextField, NSMutableArray, NSString, UIButton, UITextField;

@interface RegisterStep2TableViewController : BaseTableViewController <UIPickerViewDataSource, UIPickerViewDelegate, UITextFieldDelegate, AJAlertViewDelegate>
{
    NSString *_phoneStr;
    NSString *_password;
    BaseTextField *_companyNameTF;
    UITextField *_emailTF;
    UITextField *_provinceTF;
    UIButton *_provinceBtn;
    UITextField *_cityTF;
    UIButton *_cityBtn;
    UITextField *_areaTF;
    UIButton *_areaBtn;
    NSMutableArray *_provinceArray;
    NSMutableArray *_cityArray;
    NSMutableArray *_areaArray;
    long long _provinceSelectedIndex;
    long long _citySelectedIndex;
    long long _areaSelectedIndex;
}

@property(nonatomic) long long areaSelectedIndex; // @synthesize areaSelectedIndex=_areaSelectedIndex;
@property(nonatomic) long long citySelectedIndex; // @synthesize citySelectedIndex=_citySelectedIndex;
@property(nonatomic) long long provinceSelectedIndex; // @synthesize provinceSelectedIndex=_provinceSelectedIndex;
@property(retain, nonatomic) NSMutableArray *areaArray; // @synthesize areaArray=_areaArray;
@property(retain, nonatomic) NSMutableArray *cityArray; // @synthesize cityArray=_cityArray;
@property(retain, nonatomic) NSMutableArray *provinceArray; // @synthesize provinceArray=_provinceArray;
@property(nonatomic) __weak UIButton *areaBtn; // @synthesize areaBtn=_areaBtn;
@property(nonatomic) __weak UITextField *areaTF; // @synthesize areaTF=_areaTF;
@property(nonatomic) __weak UIButton *cityBtn; // @synthesize cityBtn=_cityBtn;
@property(nonatomic) __weak UITextField *cityTF; // @synthesize cityTF=_cityTF;
@property(nonatomic) __weak UIButton *provinceBtn; // @synthesize provinceBtn=_provinceBtn;
@property(nonatomic) __weak UITextField *provinceTF; // @synthesize provinceTF=_provinceTF;
@property(nonatomic) __weak UITextField *emailTF; // @synthesize emailTF=_emailTF;
@property(nonatomic) __weak BaseTextField *companyNameTF; // @synthesize companyNameTF=_companyNameTF;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *phoneStr; // @synthesize phoneStr=_phoneStr;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 buttonClick:(long long)arg2;
- (void)popViewController;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)readCityArray;
- (void)readAreaArray;
- (void)readProviceArray;
- (void)commitRegisterInfo;
- (void)btnClick:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)addPickerViewWithTag:(long long)arg1 textField:(id)arg2;
- (void)initViews;
- (void)initData;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
