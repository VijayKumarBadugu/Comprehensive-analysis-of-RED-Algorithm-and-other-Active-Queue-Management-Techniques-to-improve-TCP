#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x2b22e0c3, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x462e161a, __VMLINUX_SYMBOL_STR(unregister_qdisc) },
	{ 0xe0711a4d, __VMLINUX_SYMBOL_STR(register_qdisc) },
	{ 0x860db3d2, __VMLINUX_SYMBOL_STR(noop_qdisc) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x2dfff7c3, __VMLINUX_SYMBOL_STR(fifo_create_dflt) },
	{ 0xc2f076c9, __VMLINUX_SYMBOL_STR(bfifo_qdisc_ops) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x318cadb1, __VMLINUX_SYMBOL_STR(reciprocal_value) },
	{ 0xaa9eb03b, __VMLINUX_SYMBOL_STR(qdisc_tree_decrease_qlen) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x4cdb3178, __VMLINUX_SYMBOL_STR(ns_to_timeval) },
	{ 0x7b1e20b0, __VMLINUX_SYMBOL_STR(__qdisc_calculate_pkt_len) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0x715c52fe, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf1027503, __VMLINUX_SYMBOL_STR(qdisc_reset) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x9c5e7200, __VMLINUX_SYMBOL_STR(qdisc_destroy) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "FDD58AD0B5B628C4CFE6E9B");
