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
	{ 0x277a6037, "hid_add_device" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0xbf0837a6, "hid_parse_report" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x5495392, "hid_debug" },
	{ 0x12fa8db6, "hid_input_report" },
	{ 0xdfb63d9a, "hid_report_raw_event" },
	{ 0xc5850110, "printk" },
	{ 0x5f1ce799, "greybus_register_driver" },
	{ 0xc9ac3e5e, "greybus_deregister_driver" },
	{ 0x5dc4578a, "gb_operation_sync_timeout" },
	{ 0x5c03fd94, "gb_connection_destroy" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9ce24b36, "gb_operation_request_send_sync_timeout" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x387c599f, "hid_destroy_device" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x32ea5ef6, "hid_allocate_device" },
	{ 0x2345868f, "gb_connection_enable" },
	{ 0x37a0cba, "kfree" },
	{ 0x563a20e5, "gb_connection_create" },
	{ 0x69acdf38, "memcpy" },
	{ 0x61ea921a, "gb_connection_disable" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x3b6475ec, "gb_operation_put" },
	{ 0x872495cf, "gb_operation_create_flags" },
};

MODULE_INFO(depends, "hid,greybus");


MODULE_INFO(srcversion, "ABF21CDDE75E1378C6A75A6");
