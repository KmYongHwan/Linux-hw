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
	{ 0xaad49c42, "param_array_ops" },
	{ 0x132c593a, "isa_unregister_driver" },
	{ 0xb0ab8c89, "isa_register_driver" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x80f7ee42, "__devm_iio_device_register" },
	{ 0xfef6ccb5, "__devm_request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "C6E6E743F3F1CDD8D32967E");
