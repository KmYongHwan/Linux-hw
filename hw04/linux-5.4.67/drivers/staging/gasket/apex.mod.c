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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xb11bf3f5, "gasket_sysfs_get_device_data" },
	{ 0x2f49bb3c, "gasket_register_device" },
	{ 0xc225208c, "gasket_page_table_num_entries" },
	{ 0xba80e89, "gasket_pci_remove_device" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x5a4bf219, "gasket_sysfs_put_device_data" },
	{ 0x8c92da47, "gasket_page_table_num_simple_entries" },
	{ 0x8173bb10, "gasket_sysfs_get_attr" },
	{ 0xe8ee6897, "gasket_enable_device" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xcf87cd8e, "gasket_reset_nolock" },
	{ 0x8e3c093, "gasket_pci_add_device" },
	{ 0x6b60e78a, "gasket_sysfs_create_entries" },
	{ 0xd3286290, "gasket_unregister_device" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x38c3d415, "gasket_page_table_num_active_pages" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xa32e585d, "gasket_sysfs_put_attr" },
	{ 0x7d61a081, "gasket_disable_device" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0x7552200d, "gasket_wait_with_reschedule" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x13c49cc2, "_copy_from_user" },
};

MODULE_INFO(depends, "gasket");

MODULE_ALIAS("pci:v00001AC1d0000089Asv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "0FAE5FC08566DD27355C966");
