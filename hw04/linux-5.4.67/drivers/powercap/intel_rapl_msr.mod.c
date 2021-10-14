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
	{ 0x21e0dcfd, "rapl_add_platform_domain" },
	{ 0xe3d6084a, "__cpuhp_setup_state" },
	{ 0xe48bc71c, "powercap_register_control_type" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xa5e55057, "rdmsrl_safe_on_cpu" },
	{ 0x6228c21f, "smp_call_function_single" },
	{ 0x27050e85, "rapl_add_package" },
	{ 0x39d8b55b, "rapl_remove_package" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x25287a72, "rapl_find_package_domain" },
	{ 0x845940c8, "powercap_unregister_control_type" },
	{ 0x2b03889a, "rapl_remove_platform_domain" },
	{ 0x627f576f, "__cpuhp_remove_state" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "intel_rapl_common");

MODULE_ALIAS("platform:intel_rapl_msr");

MODULE_INFO(srcversion, "75FFFACF193F954C22B0621");
