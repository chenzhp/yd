/* ydtcpdetail.c generated by valac 0.22.1, the Vala compiler
 * generated from ydtcpdetail.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include "ydtcpdetail.h"
#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>

#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _YdTcpDetailPrivate {
    GtkLabel *local;
    GtkLabel *remote;
    GtkLabel *state;
    GtkLabel *recv_q;
    GtkLabel *send_q;
    GtkLabel *uid;
    GtkLabel *uname;
    GtkLabel *dhome;
};


static gpointer yd_tcp_detail_parent_class = NULL;

#define YD_TCP_DETAIL_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), YD_TYPE_TCP_DETAIL, YdTcpDetailPrivate))
enum {
    YD_TCP_DETAIL_DUMMY_PROPERTY
};
#define YD_TCP_DETAIL_DEFAULT_WIDTH 430
#define YD_TCP_DETAIL_DEFAULT_HEIGTH 350
#define YD_TCP_DETAIL_LOCALADDR_LABEL "Local Address :"
#define YD_TCP_DETAIL_REMOTEADDR_LABEL "Foreign Address :"
#define YD_TCP_DETAIL_STATE_LABEL "State :"
#define YD_TCP_DETAIL_RECV_QUEUE_LABEL "Recv-Queue :"
#define YD_TCP_DETAIL_SEND_QUEUE_LABEL "Send-Queue :"
#define YD_TCP_DETAIL_UID_LABEL "Uid :"
#define YD_TCP_DETAIL_UNAME_LABEL "User Name :"
#define YD_TCP_DETAIL_UHOME_LABEL "Home Directory :"
void yd_tcp_detail_response(GtkDialog * dialog, gint reponse_id,
                            void *data);
static void yd_tcp_detail_init_widget(YdTcpDetail * self);
static void yd_tcp_detail_finalize(GObject * obj);


static inline void yd_tcp_detail_update_internal(YdTcpDetail * self,
                                                 const gchar * local,
                                                 const gchar * remote,
                                                 const gchar * state,
                                                 const gchar * recv_q,
                                                 const gchar * send_q,
                                                 const gchar * uid,
                                                 const gchar * uname,
                                                 const gchar * dhome);


YdTcpDetail *yd_tcp_detail_construct(GType object_type)
{
    YdTcpDetail *self = NULL;
    self = (YdTcpDetail *) g_object_new(object_type, NULL);
    gtk_window_set_title((GtkWindow *) self, "Connection Information");
    gtk_container_set_border_width((GtkContainer *) self, (guint) 6);
    gtk_window_set_default_size((GtkWindow *) self,
                                YD_TCP_DETAIL_DEFAULT_WIDTH,
                                YD_TCP_DETAIL_DEFAULT_HEIGTH);
    gtk_dialog_add_buttons((GtkDialog *) self, "Close", GTK_RESPONSE_CLOSE,
                           NULL);
    g_signal_connect(self, "response", (GCallback) yd_tcp_detail_response,
                     NULL);
    yd_tcp_detail_init_widget(self);
    return self;
}


YdTcpDetail *yd_tcp_detail_new(void)
{
    return yd_tcp_detail_construct(YD_TYPE_TCP_DETAIL);
}


void yd_tcp_detail_show_dialog(YdTcpDetail * self)
{
    g_return_if_fail(self != NULL);
    gtk_dialog_run((GtkDialog *) self);
}


static gpointer _g_object_ref0(gpointer self)
{
    return self ? g_object_ref(self) : NULL;
}


static void yd_tcp_detail_init_widget(YdTcpDetail * self)
{
    GtkBox *content_area = NULL;
    GtkBox *_tmp0_ = NULL;
    GtkBox *_tmp1_ = NULL;
    GtkFrame *tcp_frame = NULL;
    GtkFrame *_tmp2_ = NULL;
    GtkWidget *_tmp3_ = NULL;
    GtkWidget *_tmp4_ = NULL;
    GtkGrid *tcp_grid = NULL;
    GtkGrid *_tmp5_ = NULL;
    GtkFrame *user_frame = NULL;
    GtkFrame *_tmp6_ = NULL;
    GtkWidget *_tmp7_ = NULL;
    GtkWidget *_tmp8_ = NULL;
    GtkGrid *user_grid = NULL;
    GtkGrid *_tmp9_ = NULL;
    GtkLabel *label = NULL;
    GtkLabel *_tmp10_ = NULL;
    GtkLabel *_tmp11_ = NULL;
    GtkLabel *_tmp12_ = NULL;
    GtkLabel *_tmp13_ = NULL;
    GtkLabel *_tmp14_ = NULL;
    GtkLabel *_tmp15_ = NULL;
    GtkLabel *_tmp16_ = NULL;
    GtkLabel *_tmp17_ = NULL;
    GtkLabel *_tmp18_ = NULL;
    GtkLabel *_tmp19_ = NULL;
    GtkLabel *_tmp20_ = NULL;
    GtkLabel *_tmp21_ = NULL;
    GtkLabel *_tmp22_ = NULL;
    GtkLabel *_tmp23_ = NULL;
    GtkLabel *_tmp24_ = NULL;
    GtkLabel *_tmp25_ = NULL;
    GtkLabel *_tmp26_ = NULL;
    GtkLabel *_tmp27_ = NULL;
    GtkLabel *_tmp28_ = NULL;
    GtkLabel *_tmp29_ = NULL;
    GtkLabel *_tmp30_ = NULL;
    GtkLabel *_tmp31_ = NULL;
    GtkLabel *_tmp32_ = NULL;
    GtkLabel *_tmp33_ = NULL;
    GtkLabel *_tmp34_ = NULL;
    GtkLabel *_tmp35_ = NULL;
    GtkLabel *_tmp36_ = NULL;
    GtkLabel *_tmp37_ = NULL;
    GtkLabel *_tmp38_ = NULL;
    GtkLabel *_tmp39_ = NULL;
    GtkLabel *_tmp40_ = NULL;
    GtkLabel *_tmp41_ = NULL;
    GtkLabel *_tmp42_ = NULL;
    GtkLabel *_tmp43_ = NULL;
    GtkLabel *_tmp44_ = NULL;
    GtkLabel *_tmp45_ = NULL;
    GtkLabel *_tmp46_ = NULL;
    GtkLabel *_tmp47_ = NULL;
    GtkLabel *_tmp48_ = NULL;
    GtkLabel *_tmp49_ = NULL;
    GtkLabel *_tmp50_ = NULL;
    GtkLabel *_tmp51_ = NULL;
    GtkLabel *_tmp52_ = NULL;
    GtkLabel *_tmp53_ = NULL;
    GtkLabel *_tmp54_ = NULL;
    GtkLabel *_tmp55_ = NULL;
    GtkLabel *_tmp56_ = NULL;
    GtkLabel *_tmp57_ = NULL;
    GtkLabel *_tmp58_ = NULL;
    GtkLabel *_tmp59_ = NULL;
    GtkLabel *_tmp60_ = NULL;
    GtkLabel *_tmp61_ = NULL;
    GtkLabel *_tmp62_ = NULL;
    GtkLabel *_tmp63_ = NULL;
    GtkLabel *_tmp64_ = NULL;
    GtkLabel *_tmp65_ = NULL;
    g_return_if_fail(self != NULL);
    _tmp0_ = (GtkBox *) gtk_dialog_get_content_area((GtkDialog *) self);
    _tmp1_ = _g_object_ref0(_tmp0_);
    content_area = _tmp1_;
    _tmp2_ = (GtkFrame *) gtk_frame_new("<b>TCP</b>");
    g_object_ref_sink(_tmp2_);
    tcp_frame = _tmp2_;
    _tmp3_ = gtk_frame_get_label_widget(tcp_frame);
    _tmp4_ = _tmp3_;
    gtk_label_set_use_markup(G_TYPE_CHECK_INSTANCE_TYPE
                             (_tmp4_,
                              GTK_TYPE_LABEL) ? ((GtkLabel *) _tmp4_) :
                             NULL, TRUE);
    gtk_container_set_border_width((GtkContainer *) tcp_frame, (guint) 5);
    _tmp5_ = (GtkGrid *) gtk_grid_new();
    g_object_ref_sink(_tmp5_);
    tcp_grid = _tmp5_;
    gtk_container_set_border_width((GtkContainer *) tcp_grid, (guint) 10);
    gtk_grid_set_row_spacing(tcp_grid, 6);
    gtk_grid_set_column_spacing(tcp_grid, 15);
    gtk_box_pack_start(G_TYPE_CHECK_INSTANCE_CAST
                       (content_area, GTK_TYPE_BOX, GtkBox),
                       (GtkWidget *) tcp_frame, FALSE, FALSE, (guint) 0);
    gtk_container_add((GtkContainer *) tcp_frame, (GtkWidget *) tcp_grid);
    _tmp6_ = (GtkFrame *) gtk_frame_new("<b>User</b>");
    g_object_ref_sink(_tmp6_);
    user_frame = _tmp6_;
    _tmp7_ = gtk_frame_get_label_widget(user_frame);
    _tmp8_ = _tmp7_;
    gtk_label_set_use_markup(G_TYPE_CHECK_INSTANCE_TYPE
                             (_tmp8_,
                              GTK_TYPE_LABEL) ? ((GtkLabel *) _tmp8_) :
                             NULL, TRUE);
    gtk_container_set_border_width((GtkContainer *) user_frame, (guint) 5);
    gtk_box_pack_start(G_TYPE_CHECK_INSTANCE_CAST
                       (content_area, GTK_TYPE_BOX, GtkBox),
                       (GtkWidget *) user_frame, FALSE, FALSE, (guint) 0);
    _tmp9_ = (GtkGrid *) gtk_grid_new();
    g_object_ref_sink(_tmp9_);
    user_grid = _tmp9_;
    gtk_container_set_border_width((GtkContainer *) user_grid, (guint) 10);
    gtk_grid_set_row_spacing(user_grid, 6);
    gtk_grid_set_column_spacing(user_grid, 15);
    gtk_container_add((GtkContainer *) user_frame,
                      (GtkWidget *) user_grid);
    _tmp10_ = (GtkLabel *) gtk_label_new(YD_TCP_DETAIL_LOCALADDR_LABEL);
    g_object_ref_sink(_tmp10_);
    label = _tmp10_;
    _tmp11_ = label;
    gtk_widget_set_halign((GtkWidget *) _tmp11_, GTK_ALIGN_START);
    _tmp12_ = label;
    gtk_grid_attach(tcp_grid, (GtkWidget *) _tmp12_, 0, 0, 1, 1);
    _tmp13_ = (GtkLabel *) gtk_label_new("127.0.0.1:1234");
    g_object_ref_sink(_tmp13_);
    _g_object_unref0(self->priv->local);
    self->priv->local = _tmp13_;
    _tmp14_ = self->priv->local;
    gtk_widget_set_halign((GtkWidget *) _tmp14_, GTK_ALIGN_START);
    _tmp15_ = self->priv->local;
    gtk_label_set_selectable(_tmp15_, TRUE);
    _tmp16_ = self->priv->local;
    gtk_grid_attach(tcp_grid, (GtkWidget *) _tmp16_, 1, 0, 1, 1);
    _tmp17_ = (GtkLabel *) gtk_label_new(YD_TCP_DETAIL_REMOTEADDR_LABEL);
    g_object_ref_sink(_tmp17_);
    _g_object_unref0(label);
    label = _tmp17_;
    _tmp18_ = label;
    gtk_widget_set_halign((GtkWidget *) _tmp18_, GTK_ALIGN_START);
    _tmp19_ = label;
    gtk_grid_attach(tcp_grid, (GtkWidget *) _tmp19_, 0, 1, 1, 1);
    _tmp20_ = (GtkLabel *) gtk_label_new("127.0.0.2:4321");
    g_object_ref_sink(_tmp20_);
    _g_object_unref0(self->priv->remote);
    self->priv->remote = _tmp20_;
    _tmp21_ = self->priv->remote;
    gtk_widget_set_halign((GtkWidget *) _tmp21_, GTK_ALIGN_START);
    _tmp22_ = self->priv->remote;
    gtk_label_set_selectable(_tmp22_, TRUE);
    _tmp23_ = self->priv->remote;
    gtk_grid_attach(tcp_grid, (GtkWidget *) _tmp23_, 1, 1, 1, 1);
    _tmp24_ = (GtkLabel *) gtk_label_new(YD_TCP_DETAIL_STATE_LABEL);
    g_object_ref_sink(_tmp24_);
    _g_object_unref0(label);
    label = _tmp24_;
    _tmp25_ = label;
    gtk_widget_set_halign((GtkWidget *) _tmp25_, GTK_ALIGN_START);
    _tmp26_ = label;
    gtk_grid_attach(tcp_grid, (GtkWidget *) _tmp26_, 0, 2, 1, 1);
    _tmp27_ = (GtkLabel *) gtk_label_new("LISTEN");
    g_object_ref_sink(_tmp27_);
    _g_object_unref0(self->priv->state);
    self->priv->state = _tmp27_;
    _tmp28_ = self->priv->state;
    gtk_widget_set_halign((GtkWidget *) _tmp28_, GTK_ALIGN_START);
    _tmp29_ = self->priv->state;
    gtk_label_set_selectable(_tmp29_, TRUE);
    _tmp30_ = self->priv->state;
    gtk_grid_attach(tcp_grid, (GtkWidget *) _tmp30_, 1, 2, 1, 1);
    _tmp31_ = (GtkLabel *) gtk_label_new(YD_TCP_DETAIL_RECV_QUEUE_LABEL);
    g_object_ref_sink(_tmp31_);
    _g_object_unref0(label);
    label = _tmp31_;
    _tmp32_ = label;
    gtk_widget_set_halign((GtkWidget *) _tmp32_, GTK_ALIGN_START);
    _tmp33_ = label;
    gtk_grid_attach(tcp_grid, (GtkWidget *) _tmp33_, 0, 3, 1, 1);
    _tmp34_ = (GtkLabel *) gtk_label_new("0");
    g_object_ref_sink(_tmp34_);
    _g_object_unref0(self->priv->recv_q);
    self->priv->recv_q = _tmp34_;
    _tmp35_ = self->priv->recv_q;
    gtk_widget_set_halign((GtkWidget *) _tmp35_, GTK_ALIGN_START);
    _tmp36_ = self->priv->recv_q;
    gtk_label_set_selectable(_tmp36_, TRUE);
    _tmp37_ = self->priv->recv_q;
    gtk_grid_attach(tcp_grid, (GtkWidget *) _tmp37_, 1, 3, 1, 1);
    _tmp38_ = (GtkLabel *) gtk_label_new(YD_TCP_DETAIL_SEND_QUEUE_LABEL);
    g_object_ref_sink(_tmp38_);
    _g_object_unref0(label);
    label = _tmp38_;
    _tmp39_ = label;
    gtk_widget_set_halign((GtkWidget *) _tmp39_, GTK_ALIGN_START);
    _tmp40_ = label;
    gtk_grid_attach(tcp_grid, (GtkWidget *) _tmp40_, 0, 4, 1, 1);
    _tmp41_ = (GtkLabel *) gtk_label_new("1");
    g_object_ref_sink(_tmp41_);
    _g_object_unref0(self->priv->send_q);
    self->priv->send_q = _tmp41_;
    _tmp42_ = self->priv->send_q;
    gtk_widget_set_halign((GtkWidget *) _tmp42_, GTK_ALIGN_START);
    _tmp43_ = self->priv->send_q;
    gtk_label_set_selectable(_tmp43_, TRUE);
    _tmp44_ = self->priv->send_q;
    gtk_grid_attach(tcp_grid, (GtkWidget *) _tmp44_, 1, 4, 1, 1);
    _tmp45_ = (GtkLabel *) gtk_label_new(YD_TCP_DETAIL_UID_LABEL);
    g_object_ref_sink(_tmp45_);
    _g_object_unref0(label);
    label = _tmp45_;
    _tmp46_ = label;
    gtk_widget_set_halign((GtkWidget *) _tmp46_, GTK_ALIGN_START);
    _tmp47_ = label;
    gtk_grid_attach(user_grid, (GtkWidget *) _tmp47_, 0, 0, 1, 1);
    _tmp48_ = (GtkLabel *) gtk_label_new("1000");
    g_object_ref_sink(_tmp48_);
    _g_object_unref0(self->priv->uid);
    self->priv->uid = _tmp48_;
    _tmp49_ = self->priv->uid;
    gtk_widget_set_halign((GtkWidget *) _tmp49_, GTK_ALIGN_START);
    _tmp50_ = self->priv->uid;
    gtk_label_set_selectable(_tmp50_, TRUE);
    _tmp51_ = self->priv->uid;
    gtk_grid_attach(user_grid, (GtkWidget *) _tmp51_, 1, 0, 1, 1);
    _tmp52_ = (GtkLabel *) gtk_label_new(YD_TCP_DETAIL_UNAME_LABEL);
    g_object_ref_sink(_tmp52_);
    _g_object_unref0(label);
    label = _tmp52_;
    _tmp53_ = label;
    gtk_widget_set_halign((GtkWidget *) _tmp53_, GTK_ALIGN_START);
    _tmp54_ = label;
    gtk_grid_attach(user_grid, (GtkWidget *) _tmp54_, 0, 1, 1, 1);
    _tmp55_ = (GtkLabel *) gtk_label_new("wiky");
    g_object_ref_sink(_tmp55_);
    _g_object_unref0(self->priv->uname);
    self->priv->uname = _tmp55_;
    _tmp56_ = self->priv->uname;
    gtk_widget_set_halign((GtkWidget *) _tmp56_, GTK_ALIGN_START);
    _tmp57_ = self->priv->uname;
    gtk_label_set_selectable(_tmp57_, TRUE);
    _tmp58_ = self->priv->uname;
    gtk_grid_attach(user_grid, (GtkWidget *) _tmp58_, 1, 1, 1, 1);
    _tmp59_ = (GtkLabel *) gtk_label_new(YD_TCP_DETAIL_UHOME_LABEL);
    g_object_ref_sink(_tmp59_);
    _g_object_unref0(label);
    label = _tmp59_;
    _tmp60_ = label;
    gtk_widget_set_halign((GtkWidget *) _tmp60_, GTK_ALIGN_START);
    _tmp61_ = label;
    gtk_grid_attach(user_grid, (GtkWidget *) _tmp61_, 0, 2, 1, 1);
    _tmp62_ = (GtkLabel *) gtk_label_new("/home/wiky");
    g_object_ref_sink(_tmp62_);
    _g_object_unref0(self->priv->dhome);
    self->priv->dhome = _tmp62_;
    _tmp63_ = self->priv->dhome;
    gtk_widget_set_halign((GtkWidget *) _tmp63_, GTK_ALIGN_START);
    _tmp64_ = self->priv->dhome;
    gtk_label_set_selectable(_tmp64_, TRUE);
    _tmp65_ = self->priv->dhome;
    gtk_grid_attach(user_grid, (GtkWidget *) _tmp65_, 1, 2, 1, 1);
    gtk_widget_show_all((GtkWidget *) content_area);
    _g_object_unref0(label);
    _g_object_unref0(user_grid);
    _g_object_unref0(user_frame);
    _g_object_unref0(tcp_grid);
    _g_object_unref0(tcp_frame);
    _g_object_unref0(content_area);
}


static void yd_tcp_detail_class_init(YdTcpDetailClass * klass)
{
    yd_tcp_detail_parent_class = g_type_class_peek_parent(klass);
    g_type_class_add_private(klass, sizeof(YdTcpDetailPrivate));
    G_OBJECT_CLASS(klass)->finalize = yd_tcp_detail_finalize;
}


static void yd_tcp_detail_instance_init(YdTcpDetail * self)
{
    self->priv = YD_TCP_DETAIL_GET_PRIVATE(self);
}


static void yd_tcp_detail_finalize(GObject * obj)
{
    YdTcpDetail *self;
    self =
        G_TYPE_CHECK_INSTANCE_CAST(obj, YD_TYPE_TCP_DETAIL, YdTcpDetail);
    _g_object_unref0(self->priv->local);
    _g_object_unref0(self->priv->remote);
    _g_object_unref0(self->priv->state);
    _g_object_unref0(self->priv->recv_q);
    _g_object_unref0(self->priv->send_q);
    _g_object_unref0(self->priv->uid);
    _g_object_unref0(self->priv->uname);
    _g_object_unref0(self->priv->dhome);
    G_OBJECT_CLASS(yd_tcp_detail_parent_class)->finalize(obj);
}

static inline void yd_tcp_detail_update_internal(YdTcpDetail * self,
                                                 const gchar * local,
                                                 const gchar * remote,
                                                 const gchar * state,
                                                 const gchar * recv_q,
                                                 const gchar * send_q,
                                                 const gchar * uid,
                                                 const gchar * uname,
                                                 const gchar * dhome)
{
    YdTcpDetailPrivate *priv = self->priv;
    gtk_label_set_text(priv->local, local);
    gtk_label_set_text(priv->remote, remote);
    gtk_label_set_text(priv->state, state);
    gtk_label_set_text(priv->recv_q, recv_q);
    gtk_label_set_text(priv->send_q, send_q);
    gtk_label_set_text(priv->uid, uid);
    gtk_label_set_text(priv->uname, uname);
    gtk_label_set_text(priv->dhome, dhome);
}

void yd_tcp_detail_update(YdTcpDetail * self, ProcNetTcpEntry * tcp)
{
    if (tcp == NULL) {
        return;
    }
    yd_tcp_detail_update_internal(self,
                                  make_tcp_local_address_with_port(tcp),
                                  make_tcp_remote_address_with_port(tcp),
                                  make_tcp_state(tcp),
                                  make_tcp_recv_q(tcp),
                                  make_tcp_send_q(tcp), make_tcp_uid(tcp),
                                  make_tcp_uname(tcp),
                                  make_tcp_uhome(tcp));
}

GType yd_tcp_detail_get_type(void)
{
    static volatile gsize yd_tcp_detail_type_id__volatile = 0;
    if (g_once_init_enter(&yd_tcp_detail_type_id__volatile)) {
        static const GTypeInfo g_define_type_info =
            { sizeof(YdTcpDetailClass), (GBaseInitFunc) NULL,
            (GBaseFinalizeFunc) NULL,
                (GClassInitFunc) yd_tcp_detail_class_init,
                (GClassFinalizeFunc) NULL,
            NULL, sizeof(YdTcpDetail), 0,
                (GInstanceInitFunc) yd_tcp_detail_instance_init, NULL
        };
        GType yd_tcp_detail_type_id;
        yd_tcp_detail_type_id =
            g_type_register_static(GTK_TYPE_DIALOG, "YdTcpDetail",
                                   &g_define_type_info, 0);
        g_once_init_leave(&yd_tcp_detail_type_id__volatile,
                          yd_tcp_detail_type_id);
    }
    return yd_tcp_detail_type_id__volatile;
}


void yd_tcp_detail_response(GtkDialog * dialog, gint reponse_id,
                            void *data)
{
    GtkDialog *_tmp0_ = NULL;
    g_return_if_fail(dialog != NULL);
    _tmp0_ = dialog;
    gtk_widget_destroy((GtkWidget *) _tmp0_);
}
