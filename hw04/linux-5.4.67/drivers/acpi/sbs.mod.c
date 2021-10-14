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
	{ 0x442639ef, "param_ops_uint" },
	{ 0xeec78261, "acpi_bus_unregister_driver" },
	{ 0x8818748e, "acpi_bus_register_driver" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0x87bd07bd, "acpi_smbus_register_callback" },
	{ 0x556cca46, "x86_apple_machine" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xfe736ff9, "kobject_uevent" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xc5850110, "printk" },
	{ 0xf559a7e9, "device_create_file" },
	{ 0x6114f186, "power_supply_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3a0b85fb, "power_supply_get_drvdata" },
	{ 0x9f8e5a9e, "device_remove_file" },
	{ 0x37a0cba, "kfree" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x479247f1, "power_supply_unregister" },
	{ 0x1c8984c7, "acpi_smbus_unregister_callback" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x96eb492d, "acpi_smbus_write" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4f6c2360, "acpi_smbus_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sbshc");

MODULE_ALIAS("acpi*:ACPI0002:*");

MODULE_INFO(srcversion, "898A77C4314E742057044F1");
