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
	{ 0x752832c, "noop_llseek" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0x8f1e938c, "class_destroy" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x5c8fc611, "scsi_register_driver" },
	{ 0x3b1b6cc2, "__register_chrdev" },
	{ 0x66414bc7, "__class_create" },
	{ 0xc5850110, "printk" },
	{ 0xd1034c9c, "scsi_device_put" },
	{ 0x3dc3ac59, "scsi_device_lookup" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x88e96942, "device_create" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x954f099c, "idr_preload" },
	{ 0x8b55dc9e, "scsi_device_get" },
	{ 0x20978fb9, "idr_find" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x8aeb7a6b, "device_destroy" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x9166fada, "strncpy" },
	{ 0x6248b8c7, "scsi_ioctl" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x7ddc77ec, "scsi_ioctl_block_when_processing_errors" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x1a1bb9bc, "sdev_prefix_printk" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa71f006f, "scsi_print_sense_hdr" },
	{ 0x571da921, "__scsi_execute" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "21B90B80B9FEAF18C21035F");
