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
	{ 0xe3e9bf89, "devm_gpiod_get" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0xf1ebe9a5, "desc_to_gpio" },
	{ 0xfb578fc5, "memset" },
	{ 0xc5850110, "printk" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xf0171959, "st33zp24_probe" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x50b9de98, "devm_acpi_dev_add_driver_gpios" },
	{ 0x690e053c, "devm_gpio_request_one" },
	{ 0x85b7373, "spi_sync" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x55b7d428, "st33zp24_pm_suspend" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x69acdf38, "memcpy" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0x42dbdc6b, "st33zp24_remove" },
	{ 0x20e5f458, "st33zp24_pm_resume" },
};

MODULE_INFO(depends, "tpm_st33zp24");

MODULE_ALIAS("of:N*T*Cst,st33zp24-spi");
MODULE_ALIAS("of:N*T*Cst,st33zp24-spiC*");
MODULE_ALIAS("spi:st33zp24-spi");
MODULE_ALIAS("acpi*:SMO3324:*");

MODULE_INFO(srcversion, "3C0DEA86FB13AE6BD2BB592");
