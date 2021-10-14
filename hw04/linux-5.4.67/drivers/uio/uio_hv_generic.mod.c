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
	{ 0xb27f114a, "vmbus_driver_unregister" },
	{ 0x375aff77, "__vmbus_driver_register" },
	{ 0x1d39a3c5, "_dev_notice" },
	{ 0x8fa8a174, "__uio_register_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x913d6cf4, "vmbus_establish_gpadl" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xa2c786a5, "vmbus_connection" },
	{ 0x74d9e669, "vmbus_alloc_ring" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x82335098, "vmbus_free_ring" },
	{ 0xf0e16e2d, "uio_unregister_device" },
	{ 0x999e8297, "vfree" },
	{ 0xab933490, "vmbus_teardown_gpadl" },
	{ 0x1689a306, "vmbus_close" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xe3c6d9e8, "sysfs_create_bin_file" },
	{ 0xbba70f96, "vmbus_open" },
	{ 0x819ab862, "uio_event_notify" },
	{ 0xde8239b2, "vmbus_connect_ring" },
	{ 0x1f9eaff9, "vmbus_set_sc_create_callback" },
	{ 0x1476ce48, "vmbus_set_chn_rescind_callback" },
	{ 0x2cc325f7, "vmbus_disconnect_ring" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xfed11957, "vm_iomap_memory" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hv_vmbus,uio");


MODULE_INFO(srcversion, "815E98A1F9B8059324603D5");
