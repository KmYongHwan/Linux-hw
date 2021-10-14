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
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xa071f2c6, "single_release" },
	{ 0xcec6343e, "seq_read" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc973710c, "backlight_device_register" },
	{ 0xff282521, "rfkill_register" },
	{ 0xaad6d92f, "rfkill_init_sw_state" },
	{ 0x8d448251, "rfkill_alloc" },
	{ 0xf18bdd75, "wmi_install_notify_handler" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0xff76d558, "input_register_device" },
	{ 0x3d2bd84a, "sparse_keymap_setup" },
	{ 0xeebd5754, "input_allocate_device" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x6cb881cb, "acpi_bus_get_device" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xeaeec424, "backlight_force_update" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x9cb39373, "seq_puts" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0x4fdee897, "i8042_command" },
	{ 0x97999817, "rfkill_set_hw_state" },
	{ 0x1000e51, "schedule" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc4142837, "seq_printf" },
	{ 0x70691c99, "single_open" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0xe7ccd3bc, "backlight_device_unregister" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0x76ae31fd, "wmi_remove_notify_handler" },
	{ 0xc5850110, "printk" },
	{ 0xd38a4a4e, "sparse_keymap_report_event" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wmi,video,sparse-keymap");

MODULE_ALIAS("acpi*:VPC2004:*");

MODULE_INFO(srcversion, "80E7E533E4F73AFAAC0BE4C");
