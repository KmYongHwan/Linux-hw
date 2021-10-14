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
	{ 0xb632faa4, "vb2_ops_wait_finish" },
	{ 0x206a96df, "vb2_ops_wait_prepare" },
	{ 0x2d31e203, "vb2_fop_release" },
	{ 0x8fc84781, "v4l2_fh_open" },
	{ 0xbf9677a1, "vb2_fop_mmap" },
	{ 0x46aed09d, "video_ioctl2" },
	{ 0x88bcad7a, "vb2_fop_poll" },
	{ 0x8756a1c8, "vb2_fop_read" },
	{ 0x95f367c2, "vb2_ioctl_streamoff" },
	{ 0x4d0af5e1, "vb2_ioctl_streamon" },
	{ 0x9d5cf032, "vb2_ioctl_create_bufs" },
	{ 0x25e732e1, "vb2_ioctl_dqbuf" },
	{ 0x88e87cc6, "vb2_ioctl_expbuf" },
	{ 0xf82e6ac6, "vb2_ioctl_qbuf" },
	{ 0xb6b6e6e2, "vb2_ioctl_querybuf" },
	{ 0x4a4c2028, "vb2_ioctl_reqbufs" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x8339c695, "__video_register_device" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0x80fb2c60, "pci_request_region" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x3498c007, "vb2_queue_init" },
	{ 0xd111ad6e, "vb2_dma_contig_memops" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xb7935f8d, "video_device_release_empty" },
	{ 0x204be45b, "v4l2_device_register" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x3978fecf, "vb2_buffer_done" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0x9b102a1a, "video_devdata" },
	{ 0x9067bfb2, "vb2_plane_cookie" },
	{ 0xe484e35f, "ioread32" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x1c7ec4a3, "pci_release_region" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0xae0b7652, "v4l2_device_unregister" },
	{ 0x11d491c0, "vb2_queue_release" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x1acd8c06, "video_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-dma-contig,videobuf2-common");

MODULE_ALIAS("pci:v00008086d00001223sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B8F9A31562DE3532EF28EF4");
