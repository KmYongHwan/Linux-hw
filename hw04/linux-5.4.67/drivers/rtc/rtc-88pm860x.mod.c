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
	{ 0x6a4b47cc, "pm860x_reg_write" },
	{ 0xf9a482f9, "msleep" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x15fc91fe, "device_init_wakeup" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x9ae6bf13, "__rtc_register_device" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x74d46467, "devm_rtc_allocate_device" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8f725971, "pm860x_page_reg_write" },
	{ 0x958902ab, "pm860x_bulk_write" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0xacde7892, "rtc_update_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x926246fd, "pm860x_reg_read" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0xef9e7c50, "pm860x_bulk_read" },
	{ 0x56cd467f, "pm860x_page_bulk_read" },
	{ 0x54d26dc6, "pm860x_set_bits" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AC533059C030E503947AF2C");
