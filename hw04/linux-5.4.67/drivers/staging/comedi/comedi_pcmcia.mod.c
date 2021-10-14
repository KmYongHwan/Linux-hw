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
	{ 0x5e11012c, "pcmcia_enable_device" },
	{ 0x53d24fc5, "comedi_driver_register" },
	{ 0xf6039668, "comedi_auto_config" },
	{ 0x7da5d7a, "pcmcia_register_driver" },
	{ 0x5a8b0caa, "comedi_auto_unconfig" },
	{ 0x946cde34, "pcmcia_request_io" },
	{ 0xdc7b4bf3, "comedi_driver_unregister" },
	{ 0xa187fc9, "pcmcia_loop_config" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdc7e867e, "pcmcia_unregister_driver" },
	{ 0xce0f8ba1, "pcmcia_disable_device" },
};

MODULE_INFO(depends, "pcmcia,comedi");


MODULE_INFO(srcversion, "1A6BAF23E29F9301EA16B7C");
