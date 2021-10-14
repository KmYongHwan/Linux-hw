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
	{ 0x63331ce9, "simple_attr_release" },
	{ 0x90019f67, "debugfs_attr_write" },
	{ 0x8553edc1, "debugfs_attr_read" },
	{ 0xc373a5d1, "no_llseek" },
	{ 0xeec78261, "acpi_bus_unregister_driver" },
	{ 0x8818748e, "acpi_bus_register_driver" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xc5850110, "printk" },
	{ 0xf4b754fd, "acpi_resources_are_enforced" },
	{ 0xf5cb9fdc, "nonseekable_open" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0xefce1a63, "debugfs_create_file_unsafe" },
	{ 0x5c49fb86, "debugfs_create_x32" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0x9fc1991d, "hwmon_device_register_with_groups" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x6ce22f0f, "hwmon_device_unregister" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3aff3200, "acpi_evaluate_object_typed" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x99949898, "devm_kstrdup" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x9a087e18, "simple_attr_open" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x754d539c, "strlen" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xcd8ce890, "acpi_format_exception" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:ATK0110:*");

MODULE_INFO(srcversion, "1CD208372FDA54408BCDDD4");
