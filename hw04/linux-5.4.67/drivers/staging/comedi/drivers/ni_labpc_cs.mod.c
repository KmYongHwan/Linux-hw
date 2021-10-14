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
	{ 0xb896d779, "comedi_pcmcia_auto_unconfig" },
	{ 0xdbdfc625, "comedi_pcmcia_driver_unregister" },
	{ 0x9ef0a57c, "comedi_pcmcia_driver_register" },
	{ 0x6acbefae, "comedi_pcmcia_disable" },
	{ 0xf9117de7, "labpc_common_detach" },
	{ 0x26c91299, "labpc_common_attach" },
	{ 0x5374d021, "comedi_pcmcia_enable" },
	{ 0xa214aeaf, "comedi_to_pcmcia_dev" },
	{ 0x2ad503bc, "comedi_pcmcia_auto_config" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_pcmcia,ni_labpc_common");

MODULE_ALIAS("pcmcia:m010Bc0103f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "474B5414B1F0C1C0F8B55BE");
