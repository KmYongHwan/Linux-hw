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
	{ 0x46aed09d, "video_ioctl2" },
	{ 0xeff56534, "v4l2_event_unsubscribe" },
	{ 0x705e157, "v4l2_ctrl_subscribe_event" },
	{ 0x2246e450, "v4l2_ctrl_log_status" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0x8339c695, "__video_register_device" },
	{ 0xb3d574c3, "v4l2_ctrl_handler_setup" },
	{ 0xcca54e63, "v4l2_ctrl_new_custom" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x85bd1608, "__request_region" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xb7935f8d, "video_device_release_empty" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x204be45b, "v4l2_device_register" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x8fc84781, "v4l2_fh_open" },
	{ 0xf3b1a873, "v4l2_fh_release" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x1acd8c06, "video_unregister_device" },
	{ 0x896845d2, "pci_save_state" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x68ae0f05, "v4l2_ctrl_poll" },
	{ 0x5d597b48, "remap_pfn_range" },
	{ 0x3744cf36, "vmalloc_to_pfn" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xfb578fc5, "memset" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2f548802, "ns_to_timeval" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd857cac7, "sony_pic_camera_command" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x999e8297, "vfree" },
	{ 0x4a5da3fa, "vmalloc_to_page" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xc5850110, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,sony-laptop");

MODULE_ALIAS("pci:v0000136Bd0000FF01sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "AD7128605A4B0DA764458E1");
