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
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xe4bf6d0e, "sch56xx_watchdog_register" },
	{ 0x4788e517, "hwmon_device_register" },
	{ 0xf559a7e9, "device_create_file" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xb37b9b81, "sch56xx_read_virtual_reg16" },
	{ 0xaa17a737, "sch56xx_write_virtual_reg" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x1568393, "sch56xx_read_virtual_reg" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9f8e5a9e, "device_remove_file" },
	{ 0x6ce22f0f, "hwmon_device_unregister" },
	{ 0x34257f35, "sch56xx_watchdog_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sch56xx-common");


MODULE_INFO(srcversion, "64DB343A4C53E6B5FD97487");
