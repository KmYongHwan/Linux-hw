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
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xd98f8549, "class_interface_unregister" },
	{ 0x5c8fc611, "scsi_register_driver" },
	{ 0x71c53fa0, "scsi_register_interface" },
	{ 0x63ff75a3, "__scsi_iterate_devices" },
	{ 0xa9f9df77, "enclosure_register" },
	{ 0x518ab1c0, "sas_get_address" },
	{ 0xc2f83cc, "enclosure_for_each_device" },
	{ 0xbbcc1701, "scsi_is_sas_rphy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x231d70d2, "enclosure_component_alloc" },
	{ 0xfe73cd39, "enclosure_component_register" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xfe736ff9, "kobject_uevent" },
	{ 0xeada3b84, "enclosure_add_device" },
	{ 0xfb578fc5, "memset" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x571da921, "__scsi_execute" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x34b01d9, "enclosure_remove_device" },
	{ 0x1d16d314, "enclosure_unregister" },
	{ 0x7ea19302, "put_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x990e0a58, "enclosure_find" },
	{ 0x1a1bb9bc, "sdev_prefix_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "enclosure,scsi_transport_sas");


MODULE_INFO(srcversion, "9924768117AC8303EE013F5");
