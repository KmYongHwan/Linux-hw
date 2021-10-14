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
	{ 0x406940de, "fuse_file_poll" },
	{ 0x752832c, "noop_llseek" },
	{ 0x343f1816, "misc_deregister" },
	{ 0x8f1e938c, "class_destroy" },
	{ 0x47fda759, "misc_register" },
	{ 0x66414bc7, "__class_create" },
	{ 0xbb3a7559, "fuse_dev_operations" },
	{ 0xc5850110, "printk" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0xfe736ff9, "kobject_uevent" },
	{ 0x19d1aa1e, "cdev_add" },
	{ 0x2bdb9d00, "cdev_alloc" },
	{ 0xb6f7270a, "device_add" },
	{ 0x7ea19302, "put_device" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0x2af970a3, "device_initialize" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x77bc13a0, "strim" },
	{ 0x85df9b6c, "strsep" },
	{ 0x754d539c, "strlen" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7ef05f94, "fuse_dev_free" },
	{ 0x43a8e2b7, "__free_pages" },
	{ 0x56bf32d7, "fuse_simple_background" },
	{ 0x44e1b7dc, "alloc_pages_current" },
	{ 0x8eed85f5, "fuse_dev_alloc_install" },
	{ 0x65833b18, "fuse_conn_init" },
	{ 0xdf6df206, "fuse_dev_fiq_ops" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7e603204, "fuse_direct_io" },
	{ 0x7d5363ff, "fuse_do_ioctl" },
	{ 0x5b80e91b, "fuse_do_open" },
	{ 0x59b4cd69, "fuse_conn_get" },
	{ 0x1092aa27, "fuse_sync_release" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x37a0cba, "kfree" },
	{ 0x99885c34, "fuse_dev_release" },
	{ 0xd63586da, "fuse_conn_put" },
	{ 0xc5399abe, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x1aa8d2a8, "device_unregister" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdae6399, "fuse_abort_conn" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "63F704B6A417BF402870705");
