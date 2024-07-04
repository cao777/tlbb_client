//------------------------------------------------------------------------------
// Source code generated by wxDesigner from file: MiniMapMaker.wdr
// Do not modify this file, all changes will be lost!
//------------------------------------------------------------------------------

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
    #pragma implementation "MiniMapMaker_wdr.h"
#endif

// For compilers that support precompilation
#include "wx/wxprec.h"

#ifdef __BORLANDC__
    #pragma hdrstop
#endif

// Include private header
#include "MiniMapMaker_wdr.h"

#include <wx/intl.h>

// Euro sign hack of the year
#if wxUSE_UNICODE
    #define __WDR_EURO__ wxT("\u20ac")
#else
    #if defined(__WXMAC__)
        #define __WDR_EURO__ wxT("\xdb")
    #elif defined(__WXMSW__)
        #define __WDR_EURO__ wxT("\x80")
    #else
        #define __WDR_EURO__ wxT("\xa4")
    #endif
#endif

// Implement window functions

wxSizer *MiniMapMaker( wxWindow *parent, bool call_fit, bool set_sizer )
{
    wxGridSizer *item0 = new wxGridSizer( 2, 0, 0 );

    wxStaticText *item1 = new wxStaticText( parent, ID_TEXT, /*_("File Name")*/_("文件名"), wxDefaultPosition, wxDefaultSize, 0 );
    item0->Add( item1, 0, wxALIGN_CENTER|wxALL, 5 );

    wxTextCtrl *item2 = new wxTextCtrl( parent, ID_TEXTCTRL_FILE_NAME, wxT(""), wxDefaultPosition, wxSize(200,-1), 0 );
    item0->Add( item2, 0, wxALIGN_CENTER|wxALL, 5 );

    wxStaticText *item3 = new wxStaticText( parent, ID_TEXT, /*_("Tile Size")*/_("网格大小"), wxDefaultPosition, wxDefaultSize, 0 );
    item0->Add( item3, 0, wxALIGN_CENTER|wxALL, 5 );

    wxTextCtrl *item4 = new wxTextCtrl( parent, ID_TEXTCTRL_TILE_SIZE, wxT(""), wxDefaultPosition, wxSize(80,-1), 0 );
    item0->Add( item4, 0, wxALIGN_CENTER|wxALL, 5 );

    wxStaticText *item5 = new wxStaticText( parent, ID_TEXT, /*_("Tile Tex Width")*/_("网格贴图宽"), wxDefaultPosition, wxDefaultSize, 0 );
    item0->Add( item5, 0, wxALIGN_CENTER|wxALL, 5 );

    wxTextCtrl *item6 = new wxTextCtrl( parent, ID_TEXTCTRL_TILE_TEX_WIDTH, wxT(""), wxDefaultPosition, wxSize(80,-1), 0 );
    item0->Add( item6, 0, wxALIGN_CENTER|wxALL, 5 );

    wxStaticText *item7 = new wxStaticText( parent, ID_TEXT, /*_("Tile Tex Height")*/_("网格贴图高"), wxDefaultPosition, wxDefaultSize, 0 );
    item0->Add( item7, 0, wxALIGN_CENTER|wxALL, 5 );

    wxTextCtrl *item8 = new wxTextCtrl( parent, ID_TEXTCTRL_TILE_TEX_HEIGHT, wxT(""), wxDefaultPosition, wxSize(80,-1), 0 );
    item0->Add( item8, 0, wxALIGN_CENTER|wxALL, 5 );

    wxStaticText *item9 = new wxStaticText( parent, ID_TEXT, /*_("Texture Extension")*/_("贴图范围"), wxDefaultPosition, wxDefaultSize, 0 );
    item0->Add( item9, 0, wxALIGN_CENTER|wxALL, 5 );

    wxString strs10[] = 
    {
        _("jpg"), 
        _("png"), 
        _("bmp")
    };
    wxComboBox *item10 = new wxComboBox( parent, ID_COMBO_TEX_EXTENSION, wxT(""), wxDefaultPosition, wxSize(100,-1), 3, strs10, wxCB_DROPDOWN );
    item0->Add( item10, 0, wxALIGN_CENTER|wxALL, 5 );

    wxCheckBox *item11 = new wxCheckBox( parent, ID_CHECKBOX_DEL_TEMP_FILES, _("删除临时贴图"), wxDefaultPosition, wxDefaultSize, 0 );
    item11->SetValue( TRUE );
    item0->Add( item11, 0, wxALIGN_CENTER|wxALL, 5 );

    wxString strs12[] = 
    {
        _("MiniMap"), 
        _("CameraDirection")
        /*_("小地图"), 
        _("摄象机方向")*/
    };
    wxComboBox *item12 = new wxComboBox( parent, ID_COMBO_CAMERA_DIRECTION, wxT(""), wxDefaultPosition, wxSize(200,-1), 2, strs12, wxCB_DROPDOWN );
    item0->Add( item12, 0, wxALIGN_CENTER|wxALL, 5 );

    wxButton *item13 = new wxButton( parent, ID_BUTTON_CREATE_MINI_MAP, /*_("Create Mini Map")*/_("创建小地图"), wxDefaultPosition, wxDefaultSize, 0 );
    item0->Add( item13, 0, wxALIGN_CENTER|wxALL, 5 );

    if (set_sizer)
    {
        parent->SetSizer( item0 );
        if (call_fit)
            item0->SetSizeHints( parent );
    }
    
    return item0;
}

// Implement menubar functions

// Implement toolbar functions

// Implement bitmap functions


// End of generated file
