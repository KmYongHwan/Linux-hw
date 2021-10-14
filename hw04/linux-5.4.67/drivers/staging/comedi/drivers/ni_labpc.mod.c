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
	{ 0xdc7b4bf3, "comedi_driver_unregister" },
	{ 0x53d24fc5, "comedi_driver_register" },
	{ 0x9caace35, "labpc_init_dma_chan" },
	{ 0x26c91299, "labpc_common_attach" },
	{ 0x5596bdd6, "comedi_request_region" },
	{ 0x93b4e7d, "comedi_legacy_detach" },
	{ 0xf9117de7, "labpc_common_detach" },
	{ 0xbc9a3c4e, "labpc_free_dma_chan" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi,ni_labpc_isadma,ni_labpc_common");


MODULE_INFO(srcversion, "84C4BB1D512FDAD7F79C739");
