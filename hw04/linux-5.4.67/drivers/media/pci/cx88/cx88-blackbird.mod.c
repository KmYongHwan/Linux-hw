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
	{ 0xb632faa4, "vb2_ops_wait_finish" },
	{ 0x206a96df, "vb2_ops_wait_prepare" },
	{ 0x2d31e203, "vb2_fop_release" },
	{ 0x8fc84781, "v4l2_fh_open" },
	{ 0xbf9677a1, "vb2_fop_mmap" },
	{ 0x46aed09d, "video_ioctl2" },
	{ 0x88bcad7a, "vb2_fop_poll" },
	{ 0x8756a1c8, "vb2_fop_read" },
	{ 0xeff56534, "v4l2_event_unsubscribe" },
	{ 0x705e157, "v4l2_ctrl_subscribe_event" },
	{ 0x95f367c2, "vb2_ioctl_streamoff" },
	{ 0x4d0af5e1, "vb2_ioctl_streamon" },
	{ 0x25e732e1, "vb2_ioctl_dqbuf" },
	{ 0xf82e6ac6, "vb2_ioctl_qbuf" },
	{ 0xb6b6e6e2, "vb2_ioctl_querybuf" },
	{ 0x4a4c2028, "vb2_ioctl_reqbufs" },
	{ 0xb469ec53, "cx8802_unregister_driver" },
	{ 0xd32db8e2, "cx8802_register_driver" },
	{ 0x8339c695, "__video_register_device" },
	{ 0x27024d64, "cx88_vdev_init" },
	{ 0x3498c007, "vb2_queue_init" },
	{ 0x36aecacd, "vb2_dma_sg_memops" },
	{ 0xfaab9bd1, "v4l2_ctrl_add_handler" },
	{ 0xd4591c48, "cx2341x_handler_init" },
	{ 0xb109121b, "cx88_set_freq" },
	{ 0x5fb945b7, "cx8802_start_dma" },
	{ 0xede283d, "release_firmware" },
	{ 0x71deb539, "request_firmware" },
	{ 0x12a38747, "usleep_range" },
	{ 0xc1f4f659, "cx2341x_handler_setup" },
	{ 0xc4675cc2, "cx2341x_handler_set_50hz" },
	{ 0x23c87aed, "cx88_set_scale" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x3978fecf, "vb2_buffer_done" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2b5d1f34, "cx8802_get_driver" },
	{ 0xf61f5dfd, "cx8802_cancel_buffers" },
	{ 0x251ca61b, "cx2341x_handler_set_busy" },
	{ 0xc5850110, "printk" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa18244d1, "cx88_querycap" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0xf7114537, "cx88_enum_input" },
	{ 0x689bca6e, "cx88_video_mux" },
	{ 0x24262626, "cx88_newstation" },
	{ 0xdee72303, "cx88_get_stereo" },
	{ 0xdd64e639, "strscpy" },
	{ 0x5d95a6f9, "cx88_set_stereo" },
	{ 0xf76273dd, "cx88_set_tvnorm" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xee8356e4, "v4l2_ctrl_handler_log_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9b102a1a, "video_devdata" },
	{ 0x90bb263a, "cx8802_buf_prepare" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xe6a07f8b, "cx8802_buf_queue" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0x1acd8c06, "video_unregister_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,cx8802,cx88xx,videobuf2-dma-sg,cx2341x,cx8800,videobuf2-common");


MODULE_INFO(srcversion, "39F87EDE9D96C9EEA8F8A7B");
