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
	{ 0x4a4c2028, "vb2_ioctl_reqbufs" },
	{ 0x85bd1608, "__request_region" },
	{ 0xeff56534, "v4l2_event_unsubscribe" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb7935f8d, "video_device_release_empty" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0x2246e450, "v4l2_ctrl_log_status" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xae0b7652, "v4l2_device_unregister" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0x88bcad7a, "vb2_fop_poll" },
	{ 0x4d0af5e1, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x87b8798d, "sg_next" },
	{ 0x206a96df, "vb2_ops_wait_prepare" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0x8339c695, "__video_register_device" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x204be45b, "v4l2_device_register" },
	{ 0x8756a1c8, "vb2_fop_read" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x4ee7810c, "vb2_discard_done" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xbf9677a1, "vb2_fop_mmap" },
	{ 0xf82e6ac6, "vb2_ioctl_qbuf" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x1acd8c06, "video_unregister_device" },
	{ 0x705e157, "v4l2_ctrl_subscribe_event" },
	{ 0x3978fecf, "vb2_buffer_done" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xd8d4ff46, "v4l2_device_set_name" },
	{ 0x9d5cf032, "vb2_ioctl_create_bufs" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x25e732e1, "vb2_ioctl_dqbuf" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x9067bfb2, "vb2_plane_cookie" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x2d31e203, "vb2_fop_release" },
	{ 0x9b102a1a, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb3d574c3, "v4l2_ctrl_handler_setup" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8fc84781, "v4l2_fh_open" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0xb6b6e6e2, "vb2_ioctl_querybuf" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0xedc03953, "iounmap" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xb632faa4, "vb2_ops_wait_finish" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x136b2332, "pci_choose_state" },
	{ 0x95f367c2, "vb2_ioctl_streamoff" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x46aed09d, "video_ioctl2" },
	{ 0xf3251e7b, "v4l2_norm_to_name" },
	{ 0x36aecacd, "vb2_dma_sg_memops" },
	{ 0x896845d2, "pci_save_state" },
	{ 0x3498c007, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-common,videobuf2-dma-sg");


MODULE_INFO(srcversion, "DE111A92D9DD4FBCD133DEC");
