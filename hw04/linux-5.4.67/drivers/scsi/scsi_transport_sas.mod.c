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
	{ 0x80868ed7, "transport_class_register" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x2d6e4a02, "scsi_remove_target" },
	{ 0x754d539c, "strlen" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0x20592044, "transport_destroy_device" },
	{ 0xf0b30789, "attribute_container_unregister" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3a5f56f, "scsi_scan_target" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb6a11f8, "scsi_is_host_device" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x4f6dbf8e, "device_del" },
	{ 0x2e0c5381, "transport_add_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbca4d3b0, "transport_configure_device" },
	{ 0x5a921311, "strncmp" },
	{ 0x4beaf2ec, "attribute_container_register" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe193ad0d, "sysfs_remove_link" },
	{ 0xb6f7270a, "device_add" },
	{ 0xda6ec6cc, "transport_class_unregister" },
	{ 0xe01dfded, "sysfs_create_link" },
	{ 0x7ea19302, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe6492f49, "transport_setup_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x963cf8c8, "get_device" },
	{ 0x250c1a52, "device_for_each_child" },
	{ 0x37a0cba, "kfree" },
	{ 0x2af970a3, "device_initialize" },
	{ 0xc12f0948, "scsi_get_vpd_page" },
	{ 0x5d14d1b1, "transport_remove_device" },
	{ 0x153947c7, "scsi_remove_host" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2bd183b2, "bsg_job_done" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0xc829a825, "bsg_remove_queue" },
	{ 0x1f259270, "bsg_setup_queue" },
	{ 0x6f9025d3, "scsi_mode_sense" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "872DD426AECA3C2AE7589E4");
