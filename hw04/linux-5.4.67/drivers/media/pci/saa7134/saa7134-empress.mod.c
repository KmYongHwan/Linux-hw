#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0xbd16068f, "saa7134_vb2_buffer_queue" },
	{ 0x77b3a746, "saa7134_ts_buffer_prepare" },
	{ 0x987719b0, "saa7134_ts_buffer_init" },
	{ 0xb632faa4, "vb2_ops_wait_finish" },
	{ 0x206a96df, "vb2_ops_wait_prepare" },
	{ 0x9fc0c9c, "saa7134_ts_queue_setup" },
	{ 0x2d31e203, "vb2_fop_release" },
	{ 0x8fc84781, "v4l2_fh_open" },
	{ 0xbf9677a1, "vb2_fop_mmap" },
	{ 0x46aed09d, "video_ioctl2" },
	{ 0x88bcad7a, "vb2_fop_poll" },
	{ 0x8756a1c8, "vb2_fop_read" },
	{ 0xeff56534, "v4l2_event_unsubscribe" },
	{ 0x705e157, "v4l2_ctrl_subscribe_event" },
	{ 0x2246e450, "v4l2_ctrl_log_status" },
	{ 0x6624d878, "saa7134_s_frequency" },
	{ 0x49e88fba, "saa7134_g_frequency" },
	{ 0xa041af70, "saa7134_s_tuner" },
	{ 0x1fa38fb7, "saa7134_g_tuner" },
	{ 0xee0ec11, "saa7134_s_input" },
	{ 0xaf119f0, "saa7134_g_input" },
	{ 0x5eb68b26, "saa7134_enum_input" },
	{ 0xac45e8f8, "saa7134_querystd" },
	{ 0x726931a3, "saa7134_s_std" },
	{ 0xfe233cc4, "saa7134_g_std" },
	{ 0x95f367c2, "vb2_ioctl_streamoff" },
	{ 0x4d0af5e1, "vb2_ioctl_streamon" },
	{ 0x25e732e1, "vb2_ioctl_dqbuf" },
	{ 0x88e87cc6, "vb2_ioctl_expbuf" },
	{ 0xf82e6ac6, "vb2_ioctl_qbuf" },
	{ 0xb6b6e6e2, "vb2_ioctl_querybuf" },
	{ 0x4a4c2028, "vb2_ioctl_reqbufs" },
	{ 0x132778ed, "saa7134_querycap" },
	{ 0x460ed3e9, "saa7134_ts_unregister" },
	{ 0x6f6f27d2, "saa7134_ts_register" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0x11d491c0, "vb2_queue_release" },
	{ 0x1acd8c06, "video_unregister_device" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xc5850110, "printk" },
	{ 0x8339c695, "__video_register_device" },
	{ 0x3498c007, "vb2_queue_init" },
	{ 0x36aecacd, "vb2_dma_sg_memops" },
	{ 0xfaab9bd1, "v4l2_ctrl_add_handler" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x730c4be3, "saa7134_boards" },
	{ 0x60ad394d, "video_device_release" },
	{ 0xbf86e9a2, "video_device_alloc" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x9b102a1a, "video_devdata" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x60955408, "saa7134_ts_start_streaming" },
	{ 0xf9a482f9, "msleep" },
	{ 0x79d86513, "saa7134_ts_stop_streaming" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "saa7134,videobuf2-v4l2,videodev,videobuf2-dma-sg");


MODULE_INFO(srcversion, "F6DE169A0FB209075575B20");
