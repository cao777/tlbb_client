//------------------------------------------------------------------------------
// Source code generated by wxDesigner from file: DatuPointEditDlg.wdr
// Do not modify this file, all changes will be lost!
//------------------------------------------------------------------------------

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
    #pragma implementation "DatuPointEditDlg_wdr.h"
#endif

// For compilers that support precompilation
#include "wx/wxprec.h"

#ifdef __BORLANDC__
    #pragma hdrstop
#endif

// Include private header
#include "DatuPointEditDlg_wdr.h"

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

wxSizer *DatuPointEditDlg( wxWindow *parent, bool call_fit, bool set_sizer )
{
    wxBoxSizer *item0 = new wxBoxSizer( wxVERTICAL );

    wxBoxSizer *item1 = new wxBoxSizer( wxHORIZONTAL );

    wxString *strs2 = (wxString*) NULL;
    wxListBox *item2 = new wxListBox( parent, ID_LISTBOX_POINTS, wxDefaultPosition, wxSize(250,200), 0, strs2, wxLB_SINGLE );
    item1->Add( item2, 0, wxALIGN_CENTER|wxALL, 5 );

    item0->Add( item1, 0, wxALIGN_CENTER|wxALL, 5 );

    wxGridSizer *item3 = new wxGridSizer( 2, 0, 0 );

    wxStaticText *item4 = new wxStaticText( parent, ID_TEXT, /*_("Radius")*/_("��Χ"), wxDefaultPosition, wxDefaultSize, 0 );
    item3->Add( item4, 0, wxALIGN_CENTER|wxALL, 5 );

    wxTextCtrl *item5 = new wxTextCtrl( parent, ID_TEXTCTRL_RADIUS, wxT(""), wxDefaultPosition, wxSize(80,-1), wxTE_PROCESS_ENTER );
    item3->Add( item5, 0, wxALIGN_CENTER|wxALL, 5 );

    wxStaticText *item6 = new wxStaticText( parent, ID_TEXT, /*_("X POS")*/_("X��λ��"), wxDefaultPosition, wxDefaultSize, 0 );
    item3->Add( item6, 0, wxALIGN_CENTER|wxALL, 5 );

    wxTextCtrl *item7 = new wxTextCtrl( parent, ID_TEXTCTRL_XPOS, wxT(""), wxDefaultPosition, wxSize(80,-1), wxTE_PROCESS_ENTER );
    item3->Add( item7, 0, wxALIGN_CENTER|wxALL, 5 );

    wxStaticText *item8 = new wxStaticText( parent, ID_TEXT, /*_("Z POS")*/_("Z��λ��"), wxDefaultPosition, wxDefaultSize, 0 );
    item3->Add( item8, 0, wxALIGN_CENTER|wxALL, 5 );

    wxTextCtrl *item9 = new wxTextCtrl( parent, ID_TEXTCTRL_ZPOS, wxT(""), wxDefaultPosition, wxSize(80,-1), wxTE_PROCESS_ENTER );
    item3->Add( item9, 0, wxALIGN_CENTER|wxALL, 5 );

    wxStaticText *item10 = new wxStaticText( parent, ID_TEXT, /*_("Default Radius")*/_("Ĭ�Ϸ�Χ"), wxDefaultPosition, wxDefaultSize, 0 );
    item3->Add( item10, 0, wxALIGN_CENTER|wxALL, 5 );

    wxTextCtrl *item11 = new wxTextCtrl( parent, ID_TEXTCTRL_DEFAULT_RADIUS, _("10"), wxDefaultPosition, wxSize(80,-1), wxTE_PROCESS_ENTER );
    item3->Add( item11, 0, wxALIGN_CENTER|wxALL, 5 );

    item0->Add( item3, 0, wxGROW|wxALIGN_CENTER_VERTICAL|wxALL, 5 );

    wxBoxSizer *item12 = new wxBoxSizer( wxHORIZONTAL );

    wxButton *item13 = new wxButton( parent, ID_BUTTON_BEGIN_ADD_POINT, /*_("Begin Add Point")*/_("��ʼ���ӵ�"), wxDefaultPosition, wxDefaultSize, 0 );
    item12->Add( item13, 0, wxALIGN_CENTER|wxALL, 5 );

    wxButton *item14 = new wxButton( parent, ID_BUTTON_END_ADD_POINT, /*_("End Add Point")*/_("�������ӵ�"), wxDefaultPosition, wxDefaultSize, 0 );
    item12->Add( item14, 0, wxALIGN_CENTER|wxALL, 5 );

    wxButton *item15 = new wxButton( parent, ID_BUTTON_DELETE_POINT, /*_("Delete Point")*/_("ɾ����"), wxDefaultPosition, wxDefaultSize, 0 );
    item12->Add( item15, 0, wxALIGN_CENTER|wxALL, 5 );

    item0->Add( item12, 0, wxGROW|wxALIGN_CENTER_VERTICAL|wxALL, 5 );

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
