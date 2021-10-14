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
	{ 0x8818748e, "acpi_bus_register_driver" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x9939eba0, "backlight_unregister_notifier" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0xdb9b1146, "thermal_cooling_device_unregister" },
	{ 0xc973710c, "backlight_device_register" },
	{ 0xacea8173, "acpi_debug_print" },
	{ 0x6cb881cb, "acpi_bus_get_device" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xeec78261, "acpi_bus_unregister_driver" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x281219f0, "acpi_notifier_call_chain" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x963804a8, "acpi_match_device_ids" },
	{ 0x5ada0011, "input_event" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x2f384db3, "acpi_is_video_device" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x643af09c, "backlight_device_get_by_type" },
	{ 0xa40ff01b, "acpi_dbg_layer" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x776bedf7, "acpi_get_pci_dev" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0xe193ad0d, "sysfs_remove_link" },
	{ 0xe3a53f4c, "sort" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x32e6f1a0, "acpi_video_backlight_string" },
	{ 0xe01dfded, "sysfs_create_link" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xff76d558, "input_register_device" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xdc512134, "backlight_register_notifier" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfe9ebbbb, "acpi_osi_is_win8" },
	{ 0xddad7952, "acpi_dbg_level" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xefcea2e7, "acpi_warning" },
	{ 0x4d91a821, "thermal_cooling_device_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0x377d8004, "acpi_error" },
	{ 0x7d12d76d, "acpi_get_parent" },
	{ 0xd34c971d, "pci_get_device" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xeaeec424, "backlight_force_update" },
	{ 0xec2b8a42, "acpi_walk_namespace" },
	{ 0xcad1aca8, "acpi_exception" },
	{ 0xe7ccd3bc, "backlight_device_unregister" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0x1e9b82be, "acpi_device_hid" },
	{ 0xeebd5754, "input_allocate_device" },
	{ 0x81e6b37f, "dmi_get_system_info" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:LNXVIDEO:*");

MODULE_INFO(srcversion, "B903433CB84E52F995B8919");
