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
	{ 0xeff56534, "v4l2_event_unsubscribe" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xb7935f8d, "video_device_release_empty" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0x5f3658ce, "v4l2_event_queue" },
	{ 0x2246e450, "v4l2_ctrl_log_status" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xae0b7652, "v4l2_device_unregister" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0x88bcad7a, "vb2_fop_poll" },
	{ 0x4d0af5e1, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0x206a96df, "vb2_ops_wait_prepare" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0x8339c695, "__video_register_device" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x204be45b, "v4l2_device_register" },
	{ 0x8756a1c8, "vb2_fop_read" },
	{ 0x31404eda, "v4l2_ctrl_new_std_menu" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xbf9677a1, "vb2_fop_mmap" },
	{ 0xf82e6ac6, "vb2_ioctl_qbuf" },
	{ 0x7ae8523d, "v4l2_event_subscribe" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x1acd8c06, "video_unregister_device" },
	{ 0x705e157, "v4l2_ctrl_subscribe_event" },
	{ 0x236fd3f8, "vb2_plane_vaddr" },
	{ 0x3978fecf, "vb2_buffer_done" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xcca54e63, "v4l2_ctrl_new_custom" },
	{ 0x9d5cf032, "vb2_ioctl_create_bufs" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xf4358872, "devm_kfree" },
	{ 0x25e732e1, "vb2_ioctl_dqbuf" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x2d31e203, "vb2_fop_release" },
	{ 0x9b102a1a, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb3d574c3, "v4l2_ctrl_handler_setup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4d87e644, "pci_ioremap_bar" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8fc84781, "v4l2_fh_open" },
	{ 0xb6b6e6e2, "vb2_ioctl_querybuf" },
	{ 0xd111ad6e, "vb2_dma_contig_memops" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0xedc03953, "iounmap" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xb632faa4, "vb2_ops_wait_finish" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x88e87cc6, "vb2_ioctl_expbuf" },
	{ 0x95f367c2, "vb2_ioctl_streamoff" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x11d491c0, "vb2_queue_release" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x46aed09d, "video_ioctl2" },
	{ 0xa637b975, "dma_ops" },
	{ 0x3498c007, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-common,videobuf2-dma-contig");


MODULE_INFO(srcversion, "8CFBF8D88A55E05B061C653");
