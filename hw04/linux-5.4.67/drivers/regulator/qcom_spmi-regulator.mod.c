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
	{ 0xfcf15af8, "dev_get_regmap" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cqcom,pm8005-regulators");
MODULE_ALIAS("of:N*T*Cqcom,pm8005-regulatorsC*");
MODULE_ALIAS("of:N*T*Cqcom,pm8841-regulators");
MODULE_ALIAS("of:N*T*Cqcom,pm8841-regulatorsC*");
MODULE_ALIAS("of:N*T*Cqcom,pm8916-regulators");
MODULE_ALIAS("of:N*T*Cqcom,pm8916-regulatorsC*");
MODULE_ALIAS("of:N*T*Cqcom,pm8941-regulators");
MODULE_ALIAS("of:N*T*Cqcom,pm8941-regulatorsC*");
MODULE_ALIAS("of:N*T*Cqcom,pm8994-regulators");
MODULE_ALIAS("of:N*T*Cqcom,pm8994-regulatorsC*");
MODULE_ALIAS("of:N*T*Cqcom,pmi8994-regulators");
MODULE_ALIAS("of:N*T*Cqcom,pmi8994-regulatorsC*");
MODULE_ALIAS("of:N*T*Cqcom,pms405-regulators");
MODULE_ALIAS("of:N*T*Cqcom,pms405-regulatorsC*");

MODULE_INFO(srcversion, "7198A701812718D42E6CA2F");
