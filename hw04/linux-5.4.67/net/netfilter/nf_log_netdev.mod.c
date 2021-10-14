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
	{ 0xce97fe12, "nf_log_unregister" },
	{ 0x776fe93b, "unregister_pernet_subsys" },
	{ 0xf3a2353a, "nf_log_register" },
	{ 0x6b542969, "register_pernet_subsys" },
	{ 0x39e61495, "nf_logger_request_module" },
	{ 0xd088fa24, "nf_log_set" },
	{ 0xc9357388, "nf_log_unset" },
	{ 0xfe4642b9, "nf_log_l2packet" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_log_common");


MODULE_INFO(srcversion, "EA02173571FA6B91A49EEBB");
