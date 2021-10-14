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
	{ 0xeec78261, "acpi_bus_unregister_driver" },
	{ 0x8818748e, "acpi_bus_register_driver" },
	{ 0xff282521, "rfkill_register" },
	{ 0x8d448251, "rfkill_alloc" },
	{ 0xc973710c, "backlight_device_register" },
	{ 0x8a490c90, "rfkill_set_sw_state" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0xe7ccd3bc, "backlight_device_unregister" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xf559a7e9, "device_create_file" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0xff76d558, "input_register_device" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xeebd5754, "input_allocate_device" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0x9f8e5a9e, "device_remove_file" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x5ada0011, "input_event" },
	{ 0x37a0cba, "kfree" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:ACCE0000:*");
MODULE_ALIAS("acpi*:ACCE0001:*");
MODULE_ALIAS("acpi*:TBLT0000:*");
MODULE_ALIAS("acpi*:IPML200:*");
MODULE_ALIAS("acpi*:FNBT0000:*");

MODULE_INFO(srcversion, "038DF892B270FC485D7CFF0");
