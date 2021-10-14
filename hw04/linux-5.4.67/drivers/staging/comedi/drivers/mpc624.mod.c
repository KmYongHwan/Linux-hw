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
	{ 0x93b4e7d, "comedi_legacy_detach" },
	{ 0xdc7b4bf3, "comedi_driver_unregister" },
	{ 0x53d24fc5, "comedi_driver_register" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x590c9f82, "comedi_timeout" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x76c6e165, "comedi_alloc_subdevices" },
	{ 0x27fbb5a5, "comedi_alloc_devpriv" },
	{ 0x5596bdd6, "comedi_request_region" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi");


MODULE_INFO(srcversion, "79CBE8C29E875D7AD3F4108");
