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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0x4101f73, "gnss_put_device" },
	{ 0x414f1f8f, "gnss_register_device" },
	{ 0xfb916bca, "serdev_device_close" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x2ef8c6f3, "gnss_deregister_device" },
	{ 0xe4d45818, "gnss_allocate_device" },
	{ 0x2f9dd375, "serdev_device_wait_until_sent" },
	{ 0x9f01c0c9, "serdev_device_write" },
	{ 0xc4ed2a93, "serdev_device_write_wakeup" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3ef161f8, "serdev_device_open" },
	{ 0x37a0cba, "kfree" },
	{ 0x8d205528, "serdev_device_set_flow_control" },
	{ 0xf1869a00, "gnss_insert_raw" },
	{ 0xcf1ab585, "serdev_device_set_baudrate" },
};

MODULE_INFO(depends, "gnss");


MODULE_INFO(srcversion, "370E37E3EB01F15C51FED16");
